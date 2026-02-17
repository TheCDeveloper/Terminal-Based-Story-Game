#include "parts.h"
#include "util.h"

void part1() 
{
    std::cout << "--------PART 1--------\n";
    sleep(2);
    std::cout << "It's a weekend and you decide to do something... fun. What will you do?\n";
    sleep(4);
    std::cout << "A. Go to the mall with your friends.\n";
    sleep(1);
    std::cout << "B. Watch a TV Show/Anime.\n";
    sleep(1);
    std::cout << "C. Hangout with your friends at your house.\n";
    sleep(1);
    while (true)
    {
        auto decision = input("> ", {"A", "a", "B", "b", "C", "c"});
        if (decision == "A" || decision == "a")
        {
            std::cout << "You call up your friends, and after a while, you guys meet up at the mall.\n";
            sleep(3);
            std::cout << "As you all are exploring the mall, you suddenly start seeing hallucinations of a sort of long haired creature crying.\n";
            sleep(5);
            std::cout << "You tell your friends about this and they just ignore it as they think you're just playing with them.\n";
            sleep(4);
            std::cout << "After having fun for about 1 and a half hour, you and your friends decide to head back.\n";
            sleep(4);
            std::cout << "However, as you're leaving the mall, you see that creature again and this time it's looking at you and seems to be calling you.\n";
            sleep(6);
            std::cout << "Your friends have all gone away and now only you are left at the parking lot.\n";
            sleep(4);
            part2a();
            break;
        }
        else if (decision == "B" || decision == "b")
        {
            std::cout << "You decide to stay home to rest and watch a show you've been wanting to watch for a long time.\n";
            sleep(4);
            std::cout << "As you're watching, you sense a weird presence, like if someone was watching you.\n";
            sleep(4);
            std::cout << "You look around yourself and you suddenly see a long haired creature crying but as you look back at it, it's gone.\n";
            sleep(5);
            std::cout << "You get worried and call the police, and wait for a while until they arrive.\n";
            sleep(4);
            std::cout << "After around 15 minutes, the police ring the door bell and enter your apartment.\n";
            sleep(4);
            std::cout << "They then investigate your entire house and check the camera footage, but, there's nothing weird to be found.\n";
            sleep(5);
            std::cout << "They think you're just pranking them and leave your apartment.\n";
            sleep(4);
            part2b();
            break;

        }
        else if (decision == "C" || decision == "c")
        {
            std::cout << "You decide to call your friends, and 3 of them agree to come.\n";
            sleep(4);
            std::cout << "After about 30 minutes, they all show up at your house.\n";
            sleep(3);
            std::cout << "You guys decide to start off by playing a game of UNO.\n";
            sleep(4);
            std::cout << "You all are having fun playing the card game, however, you suddenly start to see a long haired creature crying behind your friend.\n";
            sleep(6);
            std::cout << "You tell your friends about it, but they don't see anything off and just assume you're pranking them.\n";
            sleep(5);
            std::cout << "You get worried, but think you might just be hallucinating and continue playing the game.\n";
            sleep(5);
            part2c();
            break;
        }
    }
}
