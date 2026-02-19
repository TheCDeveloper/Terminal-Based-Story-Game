#pragma once
#include <cstdio>
#include <cctype>
#include <string_view>
#include <set>
#include <chrono>
#include <thread>


// Sleep for number of seconds
static inline void sleep(int sec) noexcept {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}


// Get the response, with expected values
static inline char getResponse(const std::string_view msg,
                               const std::set<char> &values) noexcept {
    char c;

    while (true) {
        printf("%s", msg.data());
        scanf("%c", &c);

        char lowerC = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        if (values.find(lowerC) == values.end()) {
            continue;
        }

        break;
    }

    return c;
}


// Print a message
static inline void println(const std::string_view msg) noexcept {
    printf("%s\n", msg.data());
}


// Show a message, with a specified delay in seconds
static inline void showMessage(const std::string_view msg, int sec) noexcept {
    println(msg);
    sleep(sec);
}
