#include <iostream>
#include <string>
#include <sstream>

// Function to check if a string is a valid identifier
bool isValidIdentifier(const std::string& token) {
    // Check if the token is empty or starts with a digit
    if (token.empty() || isdigit(token[0]))
        return false;

    // Check if the remaining characters are either alphanumeric or underscore
    for (size_t i = 1; i < token.length(); ++i) {
        if (!isalpha(token[i]) && !isdigit(token[i]) && token[i] != '_')
            return false;
    }

    return true;
}

// Function to check if a string is a keyword
bool isKeyword(const std::string& token) {
    static const std::string keywords[] = {
        "if", "else", "while", "for" /* add more beginner keywords here */
    };
    const size_t numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (size_t i = 0; i < numKeywords; ++i) {
        if (token == keywords[i])
            return true;
    }

    return false;
}

// Function to check if a string is an operator
bool isOperator(const std::string& token) {
    static const std::string operators[] = {
        "+", "-", "*", "/", "=", "==" /* add more operators here */
    };
    const size_t numOperators = sizeof(operators) / sizeof(operators[0]);

    for (size_t i = 0; i < numOperators; ++i) {
        if (token == operators[i])
            return true;
    }

    return false;
}

int main() {
    std::string input;

    // Read program input
    std::cout << "Enter the program input: ";
    std::getline(std::cin, input);

    // Split the input into tokens
    std::istringstream iss(input);
    std::string token;
    while (iss >> token) {
        if (isValidIdentifier(token)) {
            std::cout << token << " is a valid identifier." << std::endl;
        } else if (isKeyword(token)) {
            std::cout << token << " is a keyword." << std::endl;
        } else if (isOperator(token)) {
            std::cout << token << " is an operator." << std::endl;
        } else {
            std::cout << token << " is an invalid token." << std::endl;
        }
    }

    return 0;
}
