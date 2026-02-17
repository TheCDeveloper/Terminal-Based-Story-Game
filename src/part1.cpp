#include "parts.h"
#include "util.h"


void part1() 
{
    showMessage("-------- PART 1 --------", 2);
    showMessage("It's a weekend and you decide to do something... fun. What will you do?", 4);

    showMessage("A. Go to the mall with your friends.", 1);
    showMessage("B. Watch a TV Show/Anime.", 1);
    showMessage("C. Hangout with your friends at your house.", 1);


    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            showMessage("You call up your friends, and after a while, "
                        "you guys meet up at the mall.", 3);

            showMessage("As you all are exploring the mall, you suddenly start seeing "
                        "hallucinations of a sort of long haired creature crying.", 5);

            showMessage("You tell your friends about this and they just ignore it "
                        "as they think you're just playing with them.", 4);

            showMessage("After having fun for about 1 and a half hour, you and your friends "
                        "decide to head back.", 4);

            showMessage("However, as you're leaving the mall, you see that creature again "
                        "and this time it's looking at you and seems to be calling you.", 6);

            showMessage("Your friends have all gone away and now only you are left at "
                        "the parking lot.", 4);

            part2a();
            break;


        case 'b':
            showMessage("You decide to stay home to rest and watch a show you've been "
                        "wanting to watch for a long time.", 4);

            showMessage("As you're watching, you sense a weird presence, like if "
                        "someone was watching you.", 4);

            showMessage("You look around yourself and you suddenly see a "
                        "long haired creature crying but as you look back at it, it's gone.", 5);

            showMessage("You get worried and call the police, and wait for a "
                        "while until they arrive.", 4);

            showMessage("After around 15 minutes, the police ring the door bell and "
                        "enter your apartment.", 4);

            showMessage("They then investigate your entire house and check the camera footage, "
                        "but, there's nothing weird to be found.", 5);

            showMessage("They think you're just pranking them and leave your apartment.", 4);

            part2b();
            break;


        case 'c':
            showMessage("You decide to call your friends, and 3 of them agree to come.", 4);

            showMessage("After about 30 minutes, they all show up at your house.", 3);

            showMessage("You guys decide to start off by playing a game of UNO.", 4);

            showMessage("You all are having fun playing the card game, however, you suddenly "
                        "start to see a long haired creature crying behind your friend.", 6);

            showMessage("You tell your friends about it, but they don't see anything off "
                        "and just assume you're pranking them.", 5);

            showMessage("You get worried, but think you might just be hallucinating "
                        "and continue playing the game.", 5);

            part2c();
            break;
    }
}
