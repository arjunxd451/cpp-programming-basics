// Find the largest of two numbers.
#include <iostream>

int main() {
    int num1, num2; // declaring two integer variables

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    if (num1 > num2) {
    std::cout << num1 << " is greater than " << num2 << std::endl; // printing if num1 is greater than num2
    } else if (num1 < num2) { 
    std::cout << num2 << " is greater than " << num1 << std::endl; // printing if num2 is greater than num1
    } else { // if both conditions are false, then num1 is equal to num2
    std::cout << num1 << " is equal to " << num2 << std::endl; // printing if num1 is equal to num2
    }

    return 0;
}