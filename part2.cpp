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
            std::cout << "You decide to just ignore the creature you saw and calm your mind by going home.\n";
            sleep(4);
            std::cout << "Once you reach your home, you get a snack and decide to chill.\n";
            sleep(4);
            std::cout << "You're watching something on your TV, when suddenly, you just get sudden panic attacks of sorts.\n";
            sleep(5);
            std::cout << "You see that creature as a distorted image of sorts and feel very dizzy.\n";
            sleep(4);
            std::cout << "You decide to just sleep to cool your mind.\n";
            sleep(4);
            break;                        
        }
        else if (decision == "B" || decision == "b")
        {
            std::cout << "You decide to walk towards the creature, to see what it wants.\n";
            sleep(4);
            std::cout << "As you get closer to the creature, the world seems to get more distorted.\n";
            sleep(4);
            std::cout << "You feel dizzy aswell, but decide to keep walking.\n";
            sleep(4);
            std::cout << "As you are about to make contact with the creature...\n";
            sleep(4);
            std::cout << "You feel a very heavy force and feel like you got blown away.\n";
            sleep(4);
            std::cout << "When you open your eyes, you see you're at your house, still wondering what happened.\n";
            sleep(5);
            break;
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