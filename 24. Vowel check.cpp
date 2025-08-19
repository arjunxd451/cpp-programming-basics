// Check if a given character is a vowel or consonant

#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << ch << " is a vowel." << std::endl; //print if its a vowel
    } else{
        std::cout << ch << " is a consonant." << std::endl; //print if its a consonant
    }
}