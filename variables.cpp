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

    //we use signed, unsigned, const, short and long and other stuff to modify the variable

    //type conversion
    //double weight = 122.3;
    //int weight2 = (int) weight; //explicit conversion

}