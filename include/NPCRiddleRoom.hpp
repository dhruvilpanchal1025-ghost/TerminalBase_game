/**
* @author Manthan Patel <manthan.patel@uleth.ca> , Aryan Patel <aryan.patel@uleth.ca> , Fenil Patel <fenil.patel@uleth.ca> , 
* Dhruvil Panchal <dhruvil.panchal@uleth.ca>
* @date Fall 2024
*/

#ifndef NPCRIDDLEROOM_HPP
#define NPCRIDDLEROOM_HPP

#include <iostream>
#include "Room.hpp"

/**
 * @class NPCRiddleRoom
 * @brief Shows a room where player deals with NPC to answer riddles 
 * This class is inherited from Room 
*/
class NPCRiddleRoom : public Room {
 public:
 /**
  * @brief Default constructor
 */
    NPCRiddleRoom();

/**
 * @brief Description of the given room 
*/
    void description() override;

/**
 * @brief decides if the riddles are solved based on the player's answer
 * @param correctAnswers counts the number of correct answers answered by the player
 * @return True if the answers are solved correctly
*/
    bool isSolved(int correctAnswers) const override;
};

#endif
