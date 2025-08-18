//Calculate the average of three numbers.

#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter number 1: ";
    std::cin >> num1; // initializing variable number1 as int datatype

    std::cout << "Enter number 2: ";
    std::cin >> num2; // initializing variable number2 as int datatype

    std::cout << "Enter number 3: ";
    std::cin >> num3; // initializing variable number3 as int datatype

    double result = (num1 + num2 + num3) / 3;
    std::cout << "Average of 3 numbers: " << result << std::endl; // calculating the average of the three numbers
    return 0;
}