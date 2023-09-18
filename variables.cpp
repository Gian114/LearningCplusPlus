#include <iostream>

int main() {
    int age = 24;

    /*std::cout << "I'am Gian ";
    std::cout << age; 
    std::cout << " years old\n";*/

    //chaining
    std::cout << "I'am Gian " << age << " years old\n";

    //user input 
    std::cout << "Enter your age: ";
    std::cin >> age; //age is in age variable

}