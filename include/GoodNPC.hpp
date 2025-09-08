/**
* @author Manthan Patel <manthan.patel@uleth.ca> , Aryan Patel <aryan.patel@uleth.ca> , Fenil Patel <fenil.patel@uleth.ca> , 
* Dhruvil Panchal <dhruvil.panchal@uleth.ca>
* @date Fall 2024
*/

#ifndef GOODNPC_HPP
#define GOODNPC_HPP

#include <iostream>
#include "NPC.hpp"

/**
* @class GoodNPC
* @brief Shows a NPC which is good to the player and is friendly to the player
* This class is inherited from the NPC class
*/
class GoodNPC : public NPC {
 public:
/**
* @brief Default constructor 
*/
    GoodNPC();

/**
* @brief Reaction to the answer of riddle b the player
* @param correct confirms if the answer of the player is correct or not 
*/
    void reactToAnswer(bool correct) const override;

/**
* @brief Shows line spoken by the NPC
*/
    void speak() const;
};

#endif
