// Check if a number is positive, negative, or zero.

#include <iostream>

int main() {
    int number; // initializing variable for the number as int datatype

    std::cout << "Enter an integer: ";
    std::cin >> number; // user input for the integer

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The number is positive." << std::endl; // printing if number is +ve
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl; // printing if number is -ve
    } else {
        std::cout << "The number is zero." << std::endl; // printing if number is 0
    }