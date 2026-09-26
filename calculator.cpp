#include <iostream>

int main()
{
    std::cout << "Enter two numbers to calculate: " << std::endl;
    int num1 = 0, num2 = 0;
    char arithmetic = ' ';
    std::cin >> num1 >> arithmetic >> num2;
    if (arithmetic == '+')
    {
        std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << "." << std::endl;
    }
    else if (arithmetic == '-')
    {
        if (num1 < num2)
        {
            std::cout << "Invalid Input, Try again." << std::endl;
            return 0;
        }
        else
        {
            std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << "." << std::endl;
        }
    }
    else if (arithmetic == '*')
    {
        std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;
    }
    else if (arithmetic == '/')
    {
        if (num1 > 0 && num2 == 0 || num1 < 0 && num2 == 0)
        {
            std::cout << "The quotient of " << num1 << " and " << num2 << " is undefined" << std::endl;
        }
        else
        {
            std::cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / (double)num2 << std::endl;
        }
    }
    return 0;
}