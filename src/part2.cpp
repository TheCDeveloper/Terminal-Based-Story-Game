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
    showMessage("A. Investigate further alone to get more evidence.", 1);
    showMessage("B. Call a friend to try and get more evidence.", 1);
    showMessage("C. Continue watching the show.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("You decide to try and get more evidence on the creature being, "
                        "real.", 5);

            showMessage("You search your entire house for about 10 minutes.", 4);

            showMessage("You record your entire search in hopes of capturing something.", 5);

            showMessage("In the end, you aren't able to find any evidence and just, "
                        "decide to give up.", 6);
            
            showMessage("You then decide to take some rest after the tiring search.", 5);
            
            break;

        case 'b':
            showMessage("You decide to call a trusty friend of yours to help in, "
                        "investigating your house.", 6);
            
            showMessage("You wait for about 20 minutes.", 4);

            showMessage("They arrive at your house and you tell them what happened.", 5);

            showMessage("They do find it a bit weird but still decide to help you in, "
                        "finding some evidence.", 6);

            showMessage("You both search for about 7 minutes but can't find anything.", 5);

            showMessage("Your friend then leaves as they have some important work to do.", 5);

            showMessage("You decide to just take rest and go sleep.", 4);

            break;

        case 'c':
            showMessage("You decide to just continue watching the show.", 5);

            showMessage("You start feeling a bit sleepy.", 4);

            showMessage("You decide to drink some coffee to stay awake until you finish, "
                        "watching the show.", 6);

            showMessage("You binge-watch for about 2 more hours.", 5);

            showMessage("After you're done, you decide to get some sleep and head to bed.", 5);

            break;
    }
}


// TODO: implement
void part2c()
{
    showMessage("-------- PART 2 --------", 2);
    showMessage("What will you do now?", 2);
    showMessage("A. Ignore it and continue playing.", 1);
    showMessage("B. Check the camera footage after playing.", 1);
    showMessage("C. Keep an eye out for the creature while playing.", 1);


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
