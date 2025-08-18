// Print the ASCII value of a character.

#include <iostream>

int main() {
    char letter;

    std::cout << "Enter a character: ";
    std::cin >> letter;

    std::cout << "ASCII value of " << letter << " is " << int(letter) << std::endl; //converting char to int to get ASCII value

    return 0;
}