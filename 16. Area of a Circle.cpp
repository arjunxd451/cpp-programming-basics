// Find the area of a circle (given the radius).

#include <iostream>

int main() {
    double radius;

    std::cout << "Enter a number: ";
    std::cin >> radius;

    double result = (22/7) * radius * radius; //calculating the area using pi r sq.
    std::cout << "Area of the circle: " << result << std::endl; //printing the result

    return 0;
}