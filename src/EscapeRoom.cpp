#include "EscapeRoom.hpp"
#include <iostream>

EscapeRoom::EscapeRoom() : Room() {
}

void EscapeRoom::description() {
    std::cout << "You have entered the Escape Room.\n";
    std::cout << "If you have solved enough puzzles,"
              <<" you can escape the castle. "
              << "Otherwise, you will fall into a pit and die.\n";
}

bool EscapeRoom::isSolved(int totalPuzzlesSolved) const {
    if (totalPuzzlesSolved >= 6) {
        std::cout << "You have solved enough puzzles!\n";
        return true;
    } else {
        std::cout << "You haven't solved enough puzzles."
                  <<" You fall into a pit and die.\n";
        return false;
    }
}
