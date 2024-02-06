#include "./headers/SpellCard.h"

/**
 * @brief Construct a new Spell Card object
 * 
 * Both params are functional titles suitable for display on the card itself.
 * @param title 
 * @param spellType 
 */
SpellCard::SpellCard(string title, SpellType spellType) : Card(title){
    type = spellType;
}

SpellCard::~SpellCard(){

}

SpellType SpellCard::getSpellType() const{
    return this->type;
}