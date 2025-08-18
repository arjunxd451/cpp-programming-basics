// Find the smallest of two numbers. 

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter number 1: "; 
    std::cin >> num1; 

    std::cout << "Enter number 2: "; 
    std::cin >> num2; 

    if (num1 < num2) { 
    std::cout << num1 << " is smaller than " << num2 << std::endl; // print if num1 is smaller than num2
    } else if (num1 > num2) { 
    std::cout << num2 << " is smaller than " << num1 << std::endl; // print if num2 is smaller than num1
    } else { 
    std::cout << num1 << " is equal to " << num2 << std::endl; // Print that num1 is equal to num2
    }

    return 0; 
}