#include "ActionBasedRoom.hpp"
#include <iostream>

ActionBasedRoom::ActionBasedRoom(
    const std::string& monsterName,
    int correctWeaponID)
    : monsterName(monsterName),
    correctWeaponID(correctWeaponID) {}

void ActionBasedRoom::description() {
    std::cout << "You encounter a " << monsterName
    << "! Choose your next action, But keep in mind"
    << " it may have some consequences.\n";
    }

bool ActionBasedRoom::isSolved(int playerChoice) const {
     if (playerChoice == correctWeaponID) {
         std::cout << "You used the correct weapon and "
         << "Killed the " << monsterName << "!\n";
        return true;
    }
    std::cout << "You fool, What did you think?"
    << "using this weapon against The " << monsterName << "\n"
    << monsterName <<" killed you.\n";
    return false;
}
