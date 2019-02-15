#include <iostream>
#include "randomnumber.h"


int main ()
{

    bool run = true;
    char choice {};


    while (run)
    {
        Random::randomNumber();

        do
        {
            std::cout<<"Would you like continue playing?(Y/N)"<<std::endl;
            std::cin >> choice;
            // Делаем большие буквы маленькими
            choice = tolower(choice);
        }while (choice != 'n' && choice != 'y');
        if(choice =='n')
            {
                run = false;
            }
    }
    return 0;
}
