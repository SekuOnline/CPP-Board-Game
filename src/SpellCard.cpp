#include "./headers/SpellCard.h"

SpellCard::SpellCard(string title, SpellType spellType) : Card(title){
    type = spellType;
}

SpellCard::~SpellCard(){

}

SpellType SpellCard::getSpellType() const{
    return this->type;
}