#include "./headers/SpellCard.h"
/*
-------------------------------------------------------------------------------
De/Constructing
-------------------------------------------------------------------------------
*/

/**
 * @brief Construct a new Spell Card object
 * 
 * Both params are functional titles suitable for display on the card itself.
 * @param title 
 * @param spellType 
 */
SpellCard::SpellCard(string title, SpellType spellType) : Card(title){
    //std::cout<<"SpellCard created: "<<title<<endl;
    type = spellType;
}

SpellCard::~SpellCard(){
    //std::cout<<"Spellcard destructor called"<<endl;
}

/*
-------------------------------------------------------------------------------
Methods
-------------------------------------------------------------------------------
*/


void SpellCard::print() const{
    std::cout<<"Title: "<<title<<"\nSpell type: "<<endl;
    printSpellType();
}

/**
 * @brief printing-method for the 'SpellType' enum.
 * Converts the index of the enum to its cooresponding type.
 * 
 */
void  SpellCard::printSpellType() const{
    switch(type){
        case 0: std::cout<<"Fire"<<endl;    break;
        case 1: std::cout<<"Water"<<endl;   break;
        case 3: std::cout<<"Earth"<<endl;   break;
        case 4: std::cout<<"Wind"<<endl;    break;
        default: std::cout<<"Other"<<endl;
    }
}

/*
-------------------------------------------------------------------------------
Getters / Setters
-------------------------------------------------------------------------------
*/

SpellType SpellCard::getSpellType() const{
    return this->type;
}