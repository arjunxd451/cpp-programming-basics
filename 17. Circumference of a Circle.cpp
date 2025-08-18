// Find the circumference of a circle (given the radius).

#include <iostream>

int main() {
    double radius;

    std::cout << "Enter a number: ";
    std::cin >> radius;

    double result = 2 * (22/7) * radius; //calculating the circumference using 2 pi r
    std::cout << "Circumference of the circle: " << result << std::endl; //printing the result

    return 0;
}