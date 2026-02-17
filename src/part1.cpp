#include "parts.h"
#include "util.h"


void part1() 
{
    println("-------- PART 1 --------");
    sleep(2);
    println("It's a weekend and you decide to do something... fun. What will you do?");
    sleep(4);

    println("A. Go to the mall with your friends.");
    sleep(1);
    println("B. Watch a TV Show/Anime.");
    sleep(1);
    println("C. Hangout with your friends at your house.");
    sleep(1);

    char decision = getResponse("> ", { 'a', 'b', 'c' });
    switch (decision) {
        case 'a':
            println("You call up your friends, and after a while, you guys meet up at the mall.");
            sleep(3);
            println("As you all are exploring the mall, you suddenly start seeing hallucinations of a sort of long haired creature crying.");
            sleep(5);
            println("You tell your friends about this and they just ignore it as they think you're just playing with them.");
            sleep(4);
            println("After having fun for about 1 and a half hour, you and your friends decide to head back.");
            sleep(4);
            println("However, as you're leaving the mall, you see that creature again and this time it's looking at you and seems to be calling you.");
            sleep(6);
            println("Your friends have all gone away and now only you are left at the parking lot.");
            sleep(4);

            part2a();
            break;

        case 'b':
            println("You decide to stay home to rest and watch a show you've been wanting to watch for a long time.");
            sleep(4);
            println("As you're watching, you sense a weird presence, like if someone was watching you.");
            sleep(4);
            println("You look around yourself and you suddenly see a long haired creature crying but as you look back at it, it's gone.");
            sleep(5);
            println("You get worried and call the police, and wait for a while until they arrive.");
            sleep(4);
            println("After around 15 minutes, the police ring the door bell and enter your apartment.");
            sleep(4);
            println("They then investigate your entire house and check the camera footage, but, there's nothing weird to be found.");
            sleep(5);
            println("They think you're just pranking them and leave your apartment.");
            sleep(4);

            part2b();
            break;

        case 'c':
            println("You decide to call your friends, and 3 of them agree to come.");
            sleep(4);
            println("After about 30 minutes, they all show up at your house.");
            sleep(3);
            println("You guys decide to start off by playing a game of UNO.");
            sleep(4);
            println("You all are having fun playing the card game, however, you suddenly start to see a long haired creature crying behind your friend.");
            sleep(6);
            println("You tell your friends about it, but they don't see anything off and just assume you're pranking them.");
            sleep(5);
            println("You get worried, but think you might just be hallucinating and continue playing the game.");
            sleep(5);

            part2c();
            break;
    }
}
