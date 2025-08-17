// Check if a number is even or odd.

#include <iostream>

int main() {
    int num; // initializing variable number as int datatype

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 2 == 0) { // checking if the number is even using modulus operator
        std::cout << num << " is even." << std::endl; // printing if the number is even
    } else {
        std::cout << num << " is odd." << std::endl; // printing if the number is odd
    }
    return 0; 
}