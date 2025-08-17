// 2. Take 2 numbers as input and print their sum.

#include <iostream>

int main() {
    int a, b; //initialising variables a and be for number 1 and number 2 as integer datatypes
    
    std::cout << "Enter number 1: ";
    std::cin >> a; //storing user inputted value in variable a

    std::cout << "Enter number 2: ";
    std::cin >> b; //storing user inputted value in variable b

    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl; //sum of a and b is printed in the terminal

    return 0;

}