#include <iostream>
#include <time.h>
#include "randomnumber.h"

namespace Random {

void randomNumber () {

    int answer {};

//Рандомное семя для генерации числа
srand (time(NULL));

// Генерируем число между 1 и 25
int secretNumber = rand() % 5 + 1;

do {
    std::cout << "Guess number from 1 to 25: ";
    while(!(std::cin >> answer))
   {
       // восстанавливаем поток, если что-то пошло не так. Например хотим получить число, а получили символ. Чтобы восстановить работу потока мы вызываем cin.clear().
       std::cin.clear();
       // получаем значение из потока данных.
       while (std::cin.get() != '\n');
       std::cout << "Please enter numbers only!" << std::endl;
   }
    if (secretNumber < answer)
    {
        std::cout << "The secret number is lower" << std::endl;
    }
    if (secretNumber > answer)
    {
        std::cout << "The secret number is higher" << std::endl;
    }
} while (secretNumber != answer);

std::cout << "Congratulations!" << std::endl;
}

} // namespace Random
