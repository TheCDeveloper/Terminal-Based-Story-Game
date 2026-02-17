#pragma once
#include <iostream>
#include <string>
#include <string_view>
#include <set>


static inline std::string input(const std::string &msg,
                                const std::set<std::string> &values) noexcept {
    static std::string str;
    while (true) {
        std::cout << msg;
        std::cin >> str;

        if (values.find(msg) == values.end()) {
            continue;
        }

        break;
    }

    return str;
}
