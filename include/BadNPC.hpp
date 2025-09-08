/**
* @author Manthan Patel <manthan.patel@uleth.ca> , Aryan Patel <aryan.patel@uleth.ca> , Fenil Patel <fenil.patel@uleth.ca> , 
* Dhruvil Panchal <dhruvil.panchal@uleth.ca>
* @date Fall 2024
*/

#ifndef BADNPC_HPP
#define BADNPC_HPP

#include <iostream>
#include "NPC.hpp"

/**
* @class BadNPC 
* @brief It depicts NPC a non playable character which is evil or is negative for the player
* This class is inherited from the NPC class  
*/
class BadNPC : public NPC {
 public:
/**
* @brief Default constructor 
*/
    BadNPC();

/**
* @brief Reaction to the answer by the player for a riddle
* @param correct confirms if the player's answer is correct or not.
*/
    void reactToAnswer(bool correct) const override;

/**
* @brief Gives the line spoken by NPC
*/
    void speak() const;
};

#endif
