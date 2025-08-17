// 3. Take a name as input and print "Namah Shivaya , [name]!".

#include <iostream>

int main() {
    std::string name; // initializing variable name as a string datatype

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // storing user inputted value in variable name 

    std::cout << "Namah Shivaya, " << name << "!" << std::endl; // greeting the user with their name

    return 0;     
}
    