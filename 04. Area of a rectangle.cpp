// Calculate the area of a rectangle (given length and width)

#include <iostream>

int main() {
    double length, width; // initializing variables for length and width as double datatype

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length; // taking user input for length

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width; // taking user input for width

    double area = length * width; // calculating area of the rectangle

    std::cout << "The area of the rectangle is: " << area << std::endl; // displaying the area

    return 0;
}