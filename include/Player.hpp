/**
 * @author Dhruvil <dhruvil.panchal@uleth.ca, Aryan <aryan.patel@uleth.ca,
 * Fenil <fenil.patel@uleth.ca>, Manthan <manthan.patel@uleth.ca
 * @date 2024-11, Fall 2024.
 */
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
/**
 * @class Player.
 * @brief represent player in the game.
 * @details player class store player's name amd provides functionality.
 */
class Player {
 private:
  std::string name;

 public:
  /**
   * @brief create a player object with given name.
   * @param string given name of the palyer.
   */
  Player(const std::string& name);

  /**
   *@brief allows player to choose room base on numbers.
   *@param int the number of room chooden by player.
   */
  void chooseRoom(int roomNumber);

  /**
   * @brief retrieves the name of player.
   * @return A constant reference to the player's name.
   */
  const std::string& getName() const;
};

#endif
