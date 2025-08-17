//Calculate Simple Interest

#include <iostream>

int main() {
    double principal, rate, time; // initializing variables for principal, rate, and time as double datatype

    std::cout << "Enter principal amount: ";
    std::cin >> principal; // user input for principal amount

    std::cout << "Enter rate of interest (in %): ";
    std::cin >> rate; // user input for rate of interest rate

    std::cout << "Enter time (in years): ";
    std::cin >> time; // user input for time in years

    double simpleInterest = (principal * rate * time) / 100; // calculating simple interest using the formula prt/100
    
    std::cout << "Simple Interest: " << simpleInterest << std::endl; // displaying the calculated simple interest
    return 0;
}
