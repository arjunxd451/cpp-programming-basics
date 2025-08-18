// Calculate the square of a number.

#include <iostream>

int main() {
    double num; // storing num variable as datatype double

    std::cout << "Enter a number: ";
    std::cin >> num;

    double result = num * num; // calcuulating the square
    std::cout << num << " squared is equal to " << result << std::endl; // printing the square

    return 0;
}