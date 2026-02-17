#include "parts.h"
#include "util.h"


void part2a()
{
    println("-------- PART 2 --------");
    sleep(2);
    println("What will you do now?");
    sleep(2);
    println("A. Ignore it and go home.");
    sleep(1);
    println("B. Walk towards the creature.");
    sleep(1);
    println("C. Call the police.");
    sleep(1);

    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            println("You decide to just ignore the creature you saw and calm your mind by going home.");
            sleep(4);
            println("Once you reach your home, you get a snack and decide to chill.");
            sleep(4);
            println("You're watching something on your TV, when suddenly, you just get sudden panic attacks of sorts.");
            sleep(5);
            println("You see that creature as a distorted image of sorts and feel very dizzy.");
            sleep(4);
            println("You decide to just sleep to cool your mind.");
            sleep(4);

            break;

        case 'b':
            println("You decide to walk towards the creature, to see what it wants.");
            sleep(4);
            println("As you get closer to the creature, the world seems to get more distorted.");
            sleep(4);
            println("You feel dizzy aswell, but decide to keep walking.");
            sleep(4);
            println("As you are about to make contact with the creature...");
            sleep(4);
            println("You feel a very heavy force and feel like you got blown away.");
            sleep(4);
            println("When you open your eyes, you see you're at your house, still wondering what happened.");
            sleep(5);

            break;

        case 'c':
            break;
    }
}


void part2b()
{
    println("-------- PART 2 --------");
    sleep(2);
    println("What will you do now?");
    sleep(2);
    println("A. ...");
    sleep(1);
    println("B. ...");
    sleep(1);
    println("C. ...");
    sleep(1);

    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            println("...");
            sleep(1);

            break;

        case 'b':
            println("...");
            sleep(1);

            break;

        case 'c':
            println("...");
            sleep(1);

            break;
    }
}


void part2c()
{
    println("-------- PART 2 --------");
    sleep(2);
    println("What will you do now?");
    sleep(2);
    println("A. ...");
    sleep(1);
    println("B. ...");
    sleep(1);
    println("C. ...");
    sleep(1);

    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            println("...");
            sleep(1);

            break;

        case 'b':
            println("...");
            sleep(1);

            break;

        case 'c':
            println("...");
            sleep(1);

            break;
    }
}
