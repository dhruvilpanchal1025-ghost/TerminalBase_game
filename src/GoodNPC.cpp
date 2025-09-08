#include "GoodNPC.hpp"
#include <iostream>


GoodNPC::GoodNPC() {}


void GoodNPC::reactToAnswer(bool correct) const {
    if (correct) {
        std::cout << "Wiseman: Excellent!"
        << " You answered correctly. You may proceed.\n";
    } else {
        std::cout << "Wiseman: Oh no, that's not right."
        << " I'm so sad... you failed.\n";
    }
}

void GoodNPC::speak() const {
    std::cout << "Wiseman: I am here to help you."
    << " Answer my riddles!\n";
}
