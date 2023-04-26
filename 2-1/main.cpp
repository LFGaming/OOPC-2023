#include "cat.hpp"
#include <iostream>

int main(int argc, char** argv) {
cat pianocat(230, 10, 6, 1);
cat ceilingcat;
cat happycat = pianocat + ceilingcat;
pianocat *= ceilingcat;
}

// pianocat = (230, 10, 6, 1)
// ceilingcat = (7, 4, 5, 9)
// happycat = (118.5, 7, 5.5, 10)