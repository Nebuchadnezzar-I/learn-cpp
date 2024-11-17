#include <filesystem>
#include <iostream>
#include <cstdlib>
#include <memory>
#include <sys/stat.h>
#include <string>
#include <vector>

struct TreeNode {
    std::string fileName;
    // 0: Root, 1: File, 2: Dir
    int8_t type;
    std::vector<std::unique_ptr<TreeNode>> children;

    TreeNode(const std::string& name, int8_t nodeType)
        : fileName(name),
        type(nodeType)
    {}
};

void addChild(TreeNode* parent, const std::string& childName, int8_t childType) {
    parent->children.push_back(std::make_unique<TreeNode>(childName, childType));
}

void printTree(TreeNode* node, int depth = 0) {
    if (!node) return;

    for (int i = 0; i < depth; ++i) {
        std::cout << "  ";
    }

    std::cout << node->fileName << " (" << static_cast<int>(node->type) << ")" << std::endl;

    for (auto& child : node->children) {
        printTree(child.get(), depth + 1);
    }
}

std::string renderDirOrFileName(std::string fdName, std::string* base_path) {
    std::string n { "" };
    for ( int idx = 0; idx < fdName.length(); idx++ ) {
        if ((*base_path)[idx] == fdName[idx]) continue;
        n += fdName[idx];
    }

    return n;
}

void buildTree(TreeNode* parent, const std::string& path) {
    for (const auto& entry : std::filesystem::directory_iterator(path)) {
        std::string entryName = entry.path().filename().string();

        if (std::filesystem::is_directory(entry)) {
            auto dirNode = std::make_unique<TreeNode>(entryName, 2);
            buildTree(dirNode.get(), entry.path().string());
            parent->children.push_back(std::move(dirNode));
        }

        if (entry.path().has_extension()) {
            parent->children.push_back(std::make_unique<TreeNode>(entryName, 1));
        }
    }
}

int main() {
    // Temp bechmark
    std::string base_path { "/home/admiralcapo/personal/learn-cpp/cpp-fs/source/" };
    std::string* base_path_p { &base_path };

    auto root = std::make_unique<TreeNode>("root", 0);
    buildTree(root.get(), base_path);

    printTree(root.get());

    return EXIT_SUCCESS;
}
