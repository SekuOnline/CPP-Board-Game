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
    std::cout<<"Title: "<<title<<"\nSpell type: "<<endl;
    printSpellType();
}

void  SpellCard::printSpellType() const{
    switch(type){
        case 0: std::cout<<"Fire"<<endl;    break;
        case 1: std::cout<<"Water"<<endl;   break;
        case 3: std::cout<<"Earth"<<endl;   break;
        case 4: std::cout<<"Wind"<<endl;    break;
        
    }
}

