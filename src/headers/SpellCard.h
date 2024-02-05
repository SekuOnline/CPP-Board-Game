#ifndef SPELL_H
#define SPELL_H

#include "Card.h"

class SpellCard : public Card{
    public: 
        SpellType type;
        
        SpellCard(string title, SpellType type);
        ~SpellCard();

        //title attribute inherited from 'Card'
        
        void print() const;

        SpellType getSpellType() const;
        

        
};
#endif