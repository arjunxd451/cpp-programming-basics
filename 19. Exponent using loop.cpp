//Calculate the power of a number (using a loop).

#include <iostream>

int main() {
    double base, exponent;

    std::cout << "Enter a base: ";
    std::cin >> base;

    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    double result = 1; // Initialize result to 1

    for (int i = 0; i < exponent; i++) { //loop to multiply the base to itself exponent times
        result *= base; // Multiply the base by itself exponent times
    }

    std::cout << "Result is: " << result << std::endl; //printing the result

    return 0;
}