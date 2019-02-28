#include "palindrome.h"
#include <string>
#include <iostream>

int main()
{
    std::string word;
    std::cout << "Please enter the word: ";
    std::cin >> word;
    if( Palindrome::isPalindrome(word))
    {
        std::cout << "Word " << word << " is palindrome." << std::endl;
    }
    else
    {
        std::cout << "Word " << word << " is not palindrome" << std::endl;
    }
    return 0;
}
