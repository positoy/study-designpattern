#include "include/Util.hpp"
#include <iostream>
#include <cstdio>

void Util::draw_line(int n, char ch) {
    for (int i=0; i<n; i++) std::cout << ch << std::flush;
}

void Util::clearScreen() {
    system("cls");
}
