// Calculate the sum of the first n natural numbers.  

#include <iostream>

int main() {

    int result = 0;
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;
    
    for (int i = 1; i <= num; i++) { 
        result += i; //adding the i-th number to the result in each iteration
    }

    std::cout << "Sum of first " << num << " Natural numbers is: " << result << std::endl; //printing the result

    return 0;
}