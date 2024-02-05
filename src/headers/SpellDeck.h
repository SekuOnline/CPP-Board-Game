#ifndef SPELLDECK_H
#define SPELLDECK_H

#include "Deck.h"
#include "SpellCard.h"

class SpellDeck : public Deck{

    const SpellCard *deck[deckSize];


    SpellDeck();
    ~SpellDeck();

};
#endif //SPELLDECK_H

