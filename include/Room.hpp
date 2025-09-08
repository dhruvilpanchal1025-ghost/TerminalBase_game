/**
 * @author Dhruvil <dhruvil.panchal@uleth.ca, Aryan <aryan.patel@uleth.ca,
 * Fenil <fenil.patel@uleth.ca>, Manthan <manthan.patel@uleth.ca
 * @date 2024-11, Fall 2024.
 */
#ifndef ROOM_HPP
#define ROOM_HPP

/**
 * @class Room
 * @brief An abstract base class representing a room in the game.
 * @details The `Room` class provides an interface for various
 * types of rooms in the game,including functionality for
 * describing the room and determining if a puzzle
 * or challenge within the room has been solved.
 */
class Room {
 public:
  /**
   * @brief Virtual destructor for the Room class.
   * @details Ensures proper cleanup of derived class objects when deleted
   * through a base class pointer.
   */
  virtual ~Room() {}

  /**
   * @brief Provides a description of the room.
   * @details A pure virtual function 
   */
  virtual void description() = 0;

  /**
   * @brief Determines if the room's challenge or puzzle is solved.
   * @details A pure virtual function that must be implemented
   * by derived classes to check if the player has successfully solved
   * the room's puzzle or challenge.
   * @param playerChoice The player's choice or
   * input as answer used to attempt solving the room.
   * @return `true` if the challenge or puzzle is solved; otherwise, `false`.
   */
  virtual bool isSolved(int playerChoice) const = 0;
};

#endif
