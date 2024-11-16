#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <memory>

template <typename T>
T add(T a, T b) { return a + b; }

template <typename T>
T sub(T a, T b) { return a - b; }

template <typename T>
T mul(T a, T b) { return a * b; }

template <typename T>
T dev(T a, T b) { return a / b; }

void parseInput(std::string input, int *output) {
    std::vector<std::string> Tokens { "" };

    for (char c : input) {
        if (isspace(c)) continue;

        if (isdigit(c)) {
            if (Tokens.back() != "") {
                Tokens.push_back("");
            }

            Tokens.back() += c;
        }

        if (c == '+') {
            Tokens.push_back("+");
            continue;
        }

        if (c == '-') {
            Tokens.push_back("-");
            continue;
        }

        if (c == '*') {
            Tokens.push_back("*");
            continue;
        }

        if (c == '/') {
            Tokens.push_back("/");
            continue;
        }
    }

    for (std::string e : Tokens) {
        
    }
}

int main() {
    std::string input { };
    int output { };
    std::cout << "Enter math expression: ";
    std::getline (std::cin, input);

    parseInput(input, &output);

    // Print result
    return EXIT_SUCCESS;
}
