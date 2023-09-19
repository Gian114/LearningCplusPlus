#include <iostream>

int main()
{

    int guess;

    int tries = 0;

    std::cout << "Guess a number between 1-10.\n";
    std::cin >> guess;

    // Write a while loop here:

    while (guess != 8 && tries < 50)
    {

        std::cout << "Wrong guess, try again: ";
        std::cin >> guess;

        tries++;
        if (guess == 8)
        {

            std::cout << "You got it!\n";
        }
    }

    //for as loop in C
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "\n";
    }
}