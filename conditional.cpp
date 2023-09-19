#include <iostream>

int main() {
    //if else as other programming language
    int age = 24;

    if (age < 30)
    {
        std::cout << "You are young\n";
    } else {
        std::cout << "You are old\n";
    }

    //switch case
    switch (age)
    {   
        case 24:
            std::cout << "You are 24\n";
            break;
        case 30:
            std::cout << "You are 30\n";
            break;
        default:
            std::cout << "You are not 24 or 30\n";
            break;
    }

    //logical operator: &&, ||, !
    
}