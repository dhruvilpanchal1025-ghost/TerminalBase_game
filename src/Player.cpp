#include "Player.hpp"
#include <iostream>

Player::Player(const std::string& name) : name(name) {}

void Player::chooseRoom(int roomNumber) {
    std::cout << name << " chose room " << roomNumber << ".\n";
}

const std::string& Player::getName() const {
    return name;
}
