// Convert Celsius to Farenheit
#include <iostream>

int main() {
    double celsius; // initializing variable for Celsius temperature

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius; // user input for celsius temperature

    double fahrenheit = (celsius * 9.0 / 5.0) + 32; // converting celsius to fahrenheit

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl; // displaying the converted temperature

    return 0;
}