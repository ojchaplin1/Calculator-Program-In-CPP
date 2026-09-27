#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    char arithmetic = ' ';
    bool loopIsActive = true;

    std::cout << "Enter two numbers to calculate with arithmetic option in the middle: " << std::endl;
    std::cin >> num1 >> arithmetic >> num2;

    switch (arithmetic)
    {
    case '+':
        std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << std::endl;
    case '-':
        if (num1 < num2)
        {
            std::cout << "Invalid Input, Try again," << std::endl;
        }
        else
        {
            std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << std::endl;
        }
    case '*':
        std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;
    case '/':
        if (num1 > 0 && num2 == 0 || num1 < 0)
        {
            std::cout << "The quotient of " << num1 << " and " << num2 << " is undefined" << std::endl;
        }
        else
        {
            std::cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / (double)num2 << std::endl;
        }
    default:
        break;
    }
    return 0;
}
