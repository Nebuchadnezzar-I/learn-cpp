#include <iostream>
#include <string>
#include <antlr4-runtime.h>
#include "grammar/rLexer.h"
#include "grammar/rParser.h"

using namespace antlr4;

std::string stripQuotes(const std::string& str) {
    if (str.size() >= 2 && str.front() == '"' && str.back() == '"') {
        return str.substr(1, str.size() - 2);
    }
    return str;
}

std::string generateHTML(tree::ParseTree* tree, rParser* parser) {
    if (!tree) return "";  // Check for null pointers

    std::string html;

    // Handle ProgramContext
    if (rParser::ProgramContext* programCtx = dynamic_cast<rParser::ProgramContext*>(tree)) {
        for (auto* tag : programCtx->tag()) {
            html += generateHTML(tag, parser);
        }
        return html;
    }

    // Handle TagContext
    if (rParser::TagContext* tagCtx = dynamic_cast<rParser::TagContext*>(tree)) {
        std::string tagName = tagCtx->tagName() ? tagCtx->tagName()->getText() : "";
        html += "<" + tagName + ">";

        if (tagCtx->content()) {
            html += generateHTML(tagCtx->content(), parser);
        }

        html += "</" + tagName + ">";
        return html;
    }

    // Handle ContentContext
    if (rParser::ContentContext* contentCtx = dynamic_cast<rParser::ContentContext*>(tree)) {
        for (antlr4::tree::ParseTree* child : contentCtx->children) {
            html += generateHTML(child, parser);
        }

        if (contentCtx->STRING()) {
            html += stripQuotes(contentCtx->STRING()->getText());
        }
        return html;
    }

    return html;
}

int main() {
    std::string input =
        "body.classBody#id {"
        "   div(class=\"michal\") { \"My name is michal!\" }"
        "   div {}"
        "}";

    ANTLRInputStream inputStream(input);

    rLexer lexer(&inputStream);
    CommonTokenStream tokens(&lexer);

    rParser parser(&tokens);

    rParser::ProgramContext* tree = parser.program();

    std::string html = generateHTML(tree, &parser);
    std::cout << "Generated HTML: " << html << std::endl;

    return 0;
}

