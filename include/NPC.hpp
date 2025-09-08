/**
* @author Manthan Patel <manthan.patel@uleth.ca> , Aryan Patel <aryan.patel@uleth.ca> , Fenil Patel <fenil.patel@uleth.ca> , 
* Dhruvil Panchal <dhruvil.panchal@uleth.ca>
* @date Fall 2024
*/

#ifndef NPC_HPP
#define NPC_HPP

#include <string>

/**
* @class NPC
* @brief Base class for NPC's 
* is an interface for all NPC's
*/
class NPC {
 public:
/**
* @brief Reaction to the answer of the player
* @param correct shows whether player's answer is correct or not 
*/

    virtual void reactToAnswer(bool correct) const = 0;

/**
* @brief virtual destructor
*/
    virtual ~NPC() = default;
};

#endif
