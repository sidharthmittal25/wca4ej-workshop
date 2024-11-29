#include <iostream>
#include <string>

bool isPalindrome(std::string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The input string is a palindrome." << std::endl;
    } else {
        std::cout << "The input string is not a palindrome." << std::endl;
    }

    return 0;
}


