// Calculate the cube of a number.  
#include <iostream>

int main() {
    double num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    double result = num * num * num; //calculating the cube
    std::cout << num << " cubed is equal to " << result << std::endl;

    return 0;
}