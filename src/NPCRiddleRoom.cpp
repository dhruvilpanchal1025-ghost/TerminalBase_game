#include "NPCRiddleRoom.hpp"
#include <iostream>

NPCRiddleRoom::NPCRiddleRoom() : Room() {
}

void NPCRiddleRoom::description() {
    std::cout << "You have entered the world of Riddles,"
              << " where you will encounter mythical beings!\n"
              << "But not all of them are good. Be careful on your way.\n";
}

bool NPCRiddleRoom::isSolved(int correctAnswers) const {
    return correctAnswers == 3;
}
