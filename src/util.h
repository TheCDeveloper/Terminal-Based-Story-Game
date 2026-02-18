#pragma once
#include <cstdio>
#include <cctype>
#include <string_view>
#include <set>
#include <chrono>
#include <thread>


static inline void sleep(int sec) noexcept {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}


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


static inline void println(const std::string_view msg) noexcept {
    printf("%s\n", msg.data());
}


static inline void showMessage(const std::string_view msg, int sec) noexcept {
    println(msg);
    sleep(sec);
}
