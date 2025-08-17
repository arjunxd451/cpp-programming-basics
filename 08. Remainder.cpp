// Find the remainder when one number is divided by another.

#include <iostream>

int main() {
    int dividend, divisor; // initializing variables for dividend and divisor as int datatypes

    std::cout << "Enter the dividend: ";
    std::cin >> dividend; // input for dividend is stored in the variable

    std::cout << "Enter the divisor: ";
    std::cin >> divisor; // input for divisor is stored in the variable

    int remainder = dividend % divisor; // calculating the remainder using modulus operator

    std::cout << "The remainder when " << dividend << " is divided by " << divisor << " is: " << remainder << std::endl; // printing the result
    return 0; 
}