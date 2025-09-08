#include "BadNPC.hpp"
#include <iostream>


BadNPC::BadNPC() {}


void BadNPC::reactToAnswer(bool correct) const {
    if (!correct) {
        std::cout << "Wizard: Ha ha ha! You failed!"
        <<" Prepare to meet your doom!\n";
        std::cout << "Wizard: You have been killed.\n";
    }
}

void BadNPC::speak() const {
    std::cout << "Wizard: I am the Wizard."
    << " Fail my riddle, and you will perish!\n";
}
