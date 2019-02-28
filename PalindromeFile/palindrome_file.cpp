#include "palindrome_file.h"

namespace Palindrome {

bool isPalindrome (std::string word)
{
    unsigned long len = word.length();
    for(unsigned long i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            return false;
        }
    }
    return true;
}

} // namespace Palindrome
