 /**
* @author Manthan Patel <manthan.patel@uleth.ca> , Aryan Patel <aryan.patel@uleth.ca> , Fenil Patel <fenil.patel@uleth.ca> , 
* Dhruvil Panchal <dhruvil.panchal@uleth.ca>
* @date Fall 2024
*/

#ifndef ESCAPEROOM_HPP
#define ESCAPEROOM_HPP

#include "Room.hpp"

/**
* @class EscapeRoom
* @brief Shows the room from which the player escapes
* Inherits from the class Room
*/
class EscapeRoom : public Room {
 public:
/**
* @brief Default constructor
*/
    EscapeRoom();

/**
* @brief Shows the description of the Escape Room
*/
    void description() override;

/**
* @brief Decides if the player escapes based on number of puzzles solved
* @param takes the number of puzzles solved by the player as parameter
* @return True if player solves a number of puzzles solved.
*/
    bool isSolved(int totalPuzzlesSolved) const override;
};

#endif
