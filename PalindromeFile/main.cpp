#include "palindrome_file.h"
#include <string>
#include<fstream>
#include <iostream>

int main()
{
    std::cout << "Rading data from input file." << std::endl;
    std::ifstream fileInput {"input.txt"};
    std::string input;

    while(!fileInput.eof())
    {
        while (std::getline (fileInput, input))
        {
            if( Palindrome::isPalindrome(input))
            {
                std::ofstream textFile {"palindromes.txt", std::iostream::app};
                textFile << input << std::endl;
                textFile.close();
            }
            else
            {
                std::ofstream textFile {"others.txt", std::iostream::app};
                textFile << input << std::endl;
                textFile.close();
            }
        }
    }
    fileInput.close();
    std::cout << "Data was sorted, please check output files!" << std::endl;


    return 0;
}
