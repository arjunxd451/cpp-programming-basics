 // Calculate the product of the first n natural numbers.  
#include <iostream>

int main() {

    int result = 1;
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) { 
        result *= i; //multiplying the i-th number to the result in each iteration
    }

    std::cout << "Product of first 10 whole numbers is: " << result << std::endl; //printing the result

    return 0;
}