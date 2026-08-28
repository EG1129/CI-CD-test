// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "calculator.h"

int main()
{
    double firstNumber;
    double secondNumber;
    char operation;

    std::cout << "Enter a calculation (example: 5 + 3): ";
    std::cin >> firstNumber >> operation >> secondNumber;

    try
    {
        switch (operation)
        {
        case '+':
            std::cout << "Result: "
                << add(firstNumber, secondNumber);
            break;

        case '-':
            std::cout << "Result: "
                << subtract(firstNumber, secondNumber);
            break;

        case '*':
            std::cout << "Result: "
                << multiply(firstNumber, secondNumber);
            break;

        case '/':
            std::cout << "Result: "
                << divide(firstNumber, secondNumber);
            break;

        default:
            std::cout << "Invalid operation";
        }
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << error.what();
    }

    std::cout << '\n';
    return 0;
}