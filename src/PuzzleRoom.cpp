#include "PuzzleRoom.hpp"

#include <iostream>

// intializes puzzle room with a question and correct answer.
PuzzleRoom::PuzzleRoom(const std::string& question, int correctAnswer)
    : question(question), correctAnswer(correctAnswer) {}

// Gives question to the player.
void PuzzleRoom::description() { std::cout << question << "\n"; }

// Checks the player choice.
bool PuzzleRoom::isSolved(int playerChoice) const {
  if (playerChoice == correctAnswer) {
    std::cout << "Correct! you solved the puzzle\n";
    return true;
  }
  std::cout << "You don't know that!!!\n"
            << "You need to go home and revise maths \n";
  return false;
}
