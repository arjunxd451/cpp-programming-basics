//Calculate the power of a number (using the exponent operator).

#include <iostream>
#include <cmath>

int main() {
    double base, exponent;

    std::cout << "Enter a base: ";
    std::cin >> base;

    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    std::cout << base << " ^ " << exponent << " = " << pow(base, exponent) << std::endl; //calculating the power using the pow function from cmath library

    return 0;
}