/**
 * @author Dhruvil <dhruvil.panchal@uleth.ca, Aryan <aryan.patel@uleth.ca,
 * Fenil <fenil.patel@uleth.ca>, Manthan <manthan.patel@uleth.ca
 * @date 2024-11, Fall 2024.
 */
#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <vector>

#include "Player.hpp"
#include "Room.hpp"

/**
 * @class game
 * @brief Represent game logic and overall managment of gameplay.
 * @details game class handles interaction with player
 * manage flow of game and tracks the number of puzzles solved.
 */
class Game {
 private:
  Player player;
  int numPuzzlesSolved;

 public:
  /**
   * @brief create game object with the given player's name.
   * @param string The name of player.
   */
  Game(const std::string& playerName);

  /**
   * @brief starts the game and handle the loop.
   * @details this method sets up the game and begins the player interaction.
   */
  void startGame();

  /**
   * @brief ends the game and provide a summery of player's performance.
   * @details this method is called when the game is completed.
   */
  void endGame();

  /**
   * @brief gets the total number of puzzles solved by the player.
   */
  int getNumPuzzlesSolved() const;

  /**
   * @brief updates the number of puzzles solved based on
   * the player's progress.
   * @param bool indicating that current puzzle is sloved or not.
   */
  void updateNumPuzzlesSolved(bool isSolved);
};

#endif
