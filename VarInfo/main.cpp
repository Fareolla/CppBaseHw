#include <iostream>
#include "varinfo.h"

int main()
{
    char choice;
    bool run = true;
    while(run)
    {
        int chose = VarInfo::Selector();

        VarInfo::Info(chose);

        do
        {
            std::cout<<"Would you like to select other type?(Y/N)"<<std::endl;
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
