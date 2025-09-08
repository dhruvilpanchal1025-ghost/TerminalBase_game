/**
 * @author Dhruvil <dhruvil.panchal@uleth.ca, Aryan <aryan.patel@uleth.ca,
 * Fenil <fenil.patel@uleth.ca>, Manthan <manthan.patel@uleth.ca
 * @date 2024-11, Fall 2024.
 */
#ifndef ACTIONBASEDROOM_HPP
#define ACTIONBASEDROOM_HPP

#include <string>

#include "Room.hpp"

/**
 * @class ActionBasedRoom
 * @brief Represents a room with an action-based challenge.
 * @details The `ActionBasedRoom` class is derived from
 * the `Room` class and involves challenges
 * where the player must interact with a monster using a specific weapon.
 */
class ActionBasedRoom : public Room {
 private:
  std::string monsterName;
  int correctWeaponID;

 public:
  /**
   * @brief Constructs an ActionBasedRoom with a monster and a weapon.
   * @param string The name of the monster present in the room.
   * @param int The ID of the correct weapon
   * required to defeat the monster.
   */
  ActionBasedRoom(const std::string& monsterName, int correctWeaponID);

  /**
   * @brief Describes the room and its challenge.
   *@details Overrides the `description` function
   * from the `Room` class to provide details about
   * the monster and the action required to complete the room.
   */
  void description() override;

  /**
   * @brief Checks if the player has solved the room's challenge.
   * @details Determines whether the player used
   * the correct weapon to defeat the monster.
   * @param int The player's selection.
   * @return `true` if the challenge is solved, `false` otherwise.
   */
  bool isSolved(int playerChoice) const override;
};

#endif
