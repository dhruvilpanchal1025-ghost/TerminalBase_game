/**
 * @author Dhruvil <dhruvil.panchal@uleth.ca, Aryan <aryan.patel@uleth.ca,
 * Fenil <fenil.patel@uleth.ca>, Manthan <manthan.patel@uleth.ca
 * @date 2024-11, Fall 2024.
 */
#ifndef WEAPONROOM_HPP
#define WEAPONROOM_HPP
#include <map>
#include <string>

#include "Room.hpp"

/**
 * @class WeaponRoom
 * @brief A specialized room that contains a collection of weapons.
 * @details The WeaponRoom class inherits from
 * the Room class and manages a collection of weapons.
 * It provides methods to add weapons, display them, and check
 * conditions for solving the room.
 */
class WeaponRoom : public Room {
 private:
  std::map<int, std::string> availableWeapons;

 public:
  /**
   * @brief Constructs a new WeaponRoom object.
   */
  WeaponRoom();

  /**
   * @brief Adds a weapon to the room's collection.
   * @param int The unique identifier of the weapon as int.
   * @param string The name of the weapon.
   */
  void addWeapon(int id, const std::string& weaponName);

  /**
   * @brief Provides a description of the room.
   * @details Overrides the base class implementation to
   * describe the WeaponRoom.
   */
  void description() override;

  /**
   * @brief Checks if the room has been solved based on the player's choice.
   * @param int The player's selected weapon ID as int.
   * @return true if the room is solved, false otherwise.
   */
  bool isSolved(int playerChoice) const override;

  /**
   * @brief Displays the list of available weapons in the room.
   */
  void displayWeapons() const;
};

#endif
