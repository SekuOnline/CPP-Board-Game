#ifndef SPELLDECK_H
#define SPELLDECK_H

#include "Deck.h"
#include "SpellCard.h"

class SpellDeck : public Deck{
    public:
        SpellCard *deck[deckSize];


        SpellDeck();
        ~SpellDeck();

        SpellDeck* clone() const{return new SpellDeck(*this);}

};
#endif //SPELLDECK_H

