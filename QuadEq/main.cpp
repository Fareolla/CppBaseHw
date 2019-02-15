#include <iostream>
#include "quadeq.h"

using namespace Quad;

int main()
{
    bool run = true;
    char choice {};


    while (run)
    {
        Quad::quadEq();

        do
        {
            std::cout<<"Solve another Quadratic equation ?(Y/N)"<<std::endl;
            std::cin >> choice;
            choice = tolower(choice);
        }while (choice != 'n' && choice != 'y');
        if(choice =='n')
            {
                run = false;
            }
    }


    return 0;
}
