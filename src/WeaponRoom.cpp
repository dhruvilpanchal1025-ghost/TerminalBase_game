#include "WeaponRoom.hpp"
#include <iostream>

WeaponRoom::WeaponRoom() {}

void WeaponRoom::addWeapon(int id, const std::string& weapon) {
    availableWeapons[id] = weapon;
}

void WeaponRoom::description() {
    std::cout << "You are in the Weapon Room."
              << "Choose a weapon to prepare for the Action Room!\n";
}

bool WeaponRoom::isSolved(int playerChoice) const {
    auto selectedWeapon = availableWeapons.find(playerChoice);
    if (selectedWeapon != availableWeapons.end()) {
        std::cout << "You picked up the " << selectedWeapon->second << "!\n";
        return true;
    }

    std::cin.ignore(); // Will ignore any wrong input
    std::cin.clear();
    std::cout << "Invalid choice. You leave the Weapon Room empty-handed.\n";
    return false;
}

void WeaponRoom::displayWeapons() const {
    std::cout << "Available weapons:\n";
    for (const auto& weapon : availableWeapons) {
        std::cout << weapon.first << " => " << weapon.second << "\n";
    }
}
