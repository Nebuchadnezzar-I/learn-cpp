#include <iostream>
#include <string>
#include <antlr4-runtime.h>
#include "grammar/rLexer.h"
#include "grammar/rParser.h"

using namespace antlr4;

class MyErrorListener : public BaseErrorListener {
public:
    void syntaxError(Recognizer* recognizer, Token* offendingSymbol, size_t line,
                     size_t charPositionInLine, const std::string& msg, std::exception_ptr e) override {
        std::cerr << "Syntax error at line " << line << ", position " << charPositionInLine << ": " << msg << std::endl;
    }
};

std::string stripQuotes(const std::string& str) {
    if (str.size() >= 2 && str.front() == '"' && str.back() == '"') {
        return str.substr(1, str.size() - 2);
    }
    return str;
}

std::string generateHTML(tree::ParseTree* tree, rParser* parser) {
    if (!tree) return "";  // Check for null pointers

    std::string html;

    // Check the type of node and act accordingly
    if (auto programCtx = dynamic_cast<rParser::ProgramContext*>(tree)) {
        for (auto tag : programCtx->tag()) {
            html += generateHTML(tag, parser);
        }
    } else if (auto tagCtx = dynamic_cast<rParser::TagContext*>(tree)) {
        std::string tagName = tagCtx->tagName() ? tagCtx->tagName()->getText() : "";
        html += "<" + tagName + ">";

        if (tagCtx->content()) {
            html += generateHTML(tagCtx->content(), parser);
        }

        html += "</" + tagName + ">";
    } else if (auto contentCtx = dynamic_cast<rParser::ContentContext*>(tree)) {
        for (auto child : contentCtx->children) {
            html += generateHTML(child, parser);
        }
        if (contentCtx->STRING()) {
            html += stripQuotes(contentCtx->STRING()->getText());
        }
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

    // Add the custom error listener
    MyErrorListener errorListener;
    parser.removeErrorListeners();  // Remove default error listeners
    parser.addErrorListener(&errorListener);

    // Parse the input
    rParser::ProgramContext* tree = parser.program();

    // Your existing parse tree traversal logic
    std::string html = generateHTML(tree, &parser);
    std::cout << "Generated HTML: " << html << std::endl;

    return 0;
}

