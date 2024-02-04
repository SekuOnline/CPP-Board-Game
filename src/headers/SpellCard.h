#ifndef SPELL_H
#define SPELL_H

#include "Card.h"

/**
 * @brief Each spell has a type, that will affect the attributes of the spell.
 * 
 */
enum spellType
{
    FIRE,
    WATER,
    LAND,
    WIND
};

class SpellCard : public Card{
    public: 

        SpellCard(string title, spellType type);
        ~SpellCard();

        //title attribute inherited from 'Card'
        
        void print() const;

        spellType type;
};
#endif