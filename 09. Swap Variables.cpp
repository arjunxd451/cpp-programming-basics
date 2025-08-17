// Swap two variables.

#include <iostream>

int main() {
    int a, b; // initializing variables a and b as int datatypes

    std::cout << "Enter the first number (a): ";
    std::cin >> a;

    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    int temp = a; // temporary variable holds the original value of a
    a = b;       // a takes the swapped value from b
    b = temp;   // giving back the original value of a to b, thereby swapping the values

    std::cout << "After swapping: " << std::endl;
    std::cout << "First number (a): " << a << std::endl;
    std::cout << "Second number (b): " << b << std::endl;
    //printing swapped values 

    return 0;
}