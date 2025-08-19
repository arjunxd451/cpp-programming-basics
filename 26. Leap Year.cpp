//Check if a year is a leap year.

#include <iostream>

int main() {
    int year;
    std::cout << "Enter the year: ";
    std::cin >> year;

    if (year%4 == 0 && year%100 != 0) { //if year is divisible by 4 and not divisible by 100, then it is a leap year
        std::cout << year << " is a leap year." << std::endl;
    }
    else {
        std::cout << year << " is not a leap year." << std::endl;
    }
}