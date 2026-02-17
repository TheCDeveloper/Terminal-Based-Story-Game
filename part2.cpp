#include "parts.h"

void part2a()
{
    std::string decision;
    std::cout << "--------PART 2--------\n";
    sleep(2);
    std::cout << "What will you do now?\n";
    sleep(2);
    std::cout << "A. Ignore it and go home.\n";
    sleep(1);
    std::cout << "B. Walk towards the creature.\n";
    sleep(1);
    std::cout << "C. Call the police.\n";
    sleep(1);
    while (true)
    {
        std::cin >> decision;
        if (decision == "A" || decision == "a")
        {

        }
        else if (decision == "B" || decision == "b")
        {

        }
        else if (decision == "C" || decision == "c")
        {

        }
        else
        {
            std::cout << "Invalid option.\n";
            std::cout << "Enter a valid option: ";
            continue;
        }
    }
}

void part2b()
{

}

void part2c()
{

}