#include "Game.hpp"
#include <iostream>

Game::Game(const std::string& playerName)
: player(playerName), numPuzzlesSolved(0) {}

void Game::startGame() {
    std::cout << "Welcome to the game, " << player.getName() << "!\n";
}

void Game::endGame() {
    std::cout << "Game Over!\nPuzzles Solved: " << numPuzzlesSolved << "\n";
}

int Game::getNumPuzzlesSolved() const {
    return numPuzzlesSolved;
}

void Game::updateNumPuzzlesSolved(bool isSolved) {
    if (isSolved) {
        numPuzzlesSolved++;
    }
}
