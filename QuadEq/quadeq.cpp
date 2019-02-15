#include <iostream>
#include <cmath>
#include "quadeq.h"

namespace Quad {

void quadEq ()
{
    double a {};
    double b {};
    double c {};
    double D {};
    double x {};

    std::cout << "Searching x for quadratic equation ax2 + bx + c = 0 " << std::endl;
    std::cout << "Please specify value for a" << std::endl;
    std::cin >> a;
    std::cout << "Please specify value for b" << std::endl;
    std::cin >> b;
    std::cout << "Please specify value for c" << std::endl;
    std::cin >> c;

    D = b * b - 4 * a * c;
    std::cout << "Discriminant is: " << D << std::endl;

    if (D == 0)
    {
        std::cout << "The equation has one root" << std::endl;
        x=-b / (2 * a);
        std::cout << "Root x is: " << x << std::endl;
    }
    else if (D > 0)
    {
        std::cout << "The equation has two roots" << std::endl;
        x = (-1*b + sqrt(D)) / (2 * a);
        std::cout << "First root x is: " << x << std::endl;
        x = (-1*b - sqrt(D)) / (2 * a);
        std::cout << "Second root x is: " << x << std::endl;
    }
    else
    {
        std::cout << "D < 0. No decisions!" << std::endl;
    }
}

} // namespace Quad
