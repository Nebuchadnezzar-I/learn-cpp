#include <iostream>
#include <memory>
#include <string>
#include <vector>

// Define a structure for a node in the parse tree
struct ParseTreeNode {
    std::string value;
    std::vector<std::shared_ptr<ParseTreeNode>> children;

    ParseTreeNode(const std::string& val) : value(val) {}

    void addChild(const std::shared_ptr<ParseTreeNode>& child) {
        children.push_back(child);
    }
};

// Function to traverse the parse tree in preorder
void traversePreorder(const std::shared_ptr<ParseTreeNode>& node) {
    if (!node) return; // Base case: if the node is null, return

    // Visit the current node (process its value)
    std::cout << node->value << std::endl;

    // Recursively traverse each child node
    for (const auto& child : node->children) {
        traversePreorder(child);
    }
}

// Example usage
int main() {
    // Create a hardcoded parse tree
    auto root = std::make_shared<ParseTreeNode>("root");

    auto child1 = std::make_shared<ParseTreeNode>("child1");
    auto child2 = std::make_shared<ParseTreeNode>("child2");
    auto child3 = std::make_shared<ParseTreeNode>("child3");

    root->addChild(child1);
    root->addChild(child2);

    auto child1_1 = std::make_shared<ParseTreeNode>("child1_1");
    auto child1_2 = std::make_shared<ParseTreeNode>("child1_2");

    child1->addChild(child1_1);
    child1->addChild(child1_2);

    child2->addChild(child3);

    // Traverse the parse tree
    traversePreorder(root);

    return 0;
}

