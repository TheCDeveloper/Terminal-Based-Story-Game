#include "parts.h"

void sleep(int sec)
{
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}