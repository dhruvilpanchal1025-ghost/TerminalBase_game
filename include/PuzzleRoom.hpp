/**
 * @author Dhruvil <dhruvil.panchal@uleth.ca, Aryan <aryan.patel@uleth.ca,
 * Fenil <fenil.patel@uleth.ca>, Manthan <manthan.patel@uleth.ca
 * @date 2024-11, Fall 2024.
 */
#ifndef PUZZLEROOM_HPP
#define PUZZLEROOM_HPP
#include <string>
#include "Room.hpp"

/**
 * @class PuzzleRoom
 * @brief Represent room with puzzles which players need to solve.
 * @details puzzleroom class is inherits from room class
 * which present puzzles to player.
 */
class PuzzleRoom : public Room {
 private:
  std::string question;
  int correctAnswer;

 public:
  /**
   * @brief Constructa a puzzleroom with question and answer.
   * @details give question to player and check the answer.
   * @param string the puzzle question to player
   * @param int the correct answer for puzzle.
   */
  PuzzleRoom(const std::string& question, int correctAnswer);

  /**
   * @brief gives description of the room and presents puzzle's question.
   * @details this function override the description function of Room class
   * to include puzzle details.
   */
  void description() override;
  /**
   * @brief Check if the player's choice solves the puzzle.
   * @param int player's chosen answer o the puzzle.
   * @return `true` if the challenge or puzzle is solved; otherwise, `false`.
   */
  bool isSolved(int playerChoice) const override;
};

#endif
