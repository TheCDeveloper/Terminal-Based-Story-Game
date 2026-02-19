#include "parts.h"
#include "util.h"


void part2a()
{
    showMessage("-------- PART 2 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Ignore it and go home.", 1);
    showMessage("B. Walk towards the creature.", 1);
    showMessage("C. Call the police.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("You decide to just ignore the creature you saw and calm your mind by "
                        "going home.", 4);

            showMessage("Once you reach your home, you get a snack and decide to chill.", 4);

            showMessage("You're watching something on your TV, when suddenly, you just get sudden "
                        "panic attacks of sorts.", 5);

            showMessage("You see that creature as a distorted image of sorts "
                        "and feel very dizzy.", 4);

            showMessage("You decide to just sleep to cool your mind.", 4);

            break;


        case 'b':
            showMessage("You decide to walk towards the creature, to see what it wants.", 4);

            showMessage("As you get closer to the creature, the world seems to "
                        "get more distorted.", 4);

            showMessage("You feel dizzy aswell, but decide to keep walking.", 4);

            showMessage("As you are about to make contact with the creature...", 4);

            showMessage("You feel a very heavy force and feel like you got blown away.", 4);

            showMessage("When you open your eyes, you see you're at your house, still wondering "
                        "what happened.", 5);

            break;


        case 'c':
            showMessage("You decide to call the police.", 3);

            showMessage("You wait in the mall for about 8 minutes.", 4);

            showMessage("Then, the police arrive and you walk up to them and explain "
                        "what happened.", 5);

            showMessage("They think you're out of your mind, but they still decide to "
                        "investigate once.", 5);

            showMessage("They investigate the area where you told them the monster was, "
                        "but they couldn't find anything.", 6);

            showMessage("They then leave and you decide to just head back home and rest.", 5);

            break;
    }
}


// TODO: implement
void part2b()
{
    showMessage("-------- PART 2 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. ...", 1);
    showMessage("B. ...", 1);
    showMessage("C. ...", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);
            break;

        case 'b':
            showMessage("...", 1);
            break;

        case 'c':
            showMessage("...", 1);
            break;
    }
}


// TODO: implement
void part2c()
{
    showMessage("-------- PART 2 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. ...", 1);
    showMessage("B. ...", 1);
    showMessage("C. ...", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("...", 1);
            break;


        case 'b':
            showMessage("...", 1);
            break;


        case 'c':
            showMessage("...", 1);
            break;
    }
}
