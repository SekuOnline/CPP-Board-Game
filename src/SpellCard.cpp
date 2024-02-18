#include "./headers/SpellCard.h"

/**
 * @brief Construct a new Spell Card object
 * 
 * Both params are functional titles suitable for display on the card itself.
 * @param title 
 * @param spellType 
 */
SpellCard::SpellCard(string title, SpellType spellType) : Card(title){
    std::cout<<"SpellCard created: "<<title<<endl;
    type = spellType;
}

SpellCard::~SpellCard(){
    std::cout<<"Spellcard destructor called"<<endl;
}

SpellType SpellCard::getSpellType() const{
    return this->type;
}

void SpellCard::print() const{
    std::cout<<"Print"<<endl;
}

