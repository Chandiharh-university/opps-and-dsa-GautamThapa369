#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

std::string generatePalindrome(const std::string& str) {
    return str + std::string(str.rbegin(), str.rend());
}

int main() {
    std::string input;

    
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

   
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    
    std::string palindrome = generatePalindrome(input);
    std::cout << "Generated palindrome: " << palindrome << std::endl;

    return 0;
}
