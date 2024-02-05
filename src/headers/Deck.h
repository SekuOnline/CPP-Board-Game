#ifndef DECK_H
#define DECK_H

#include "defs.h"
#include "Card.h"
class Deck{

    public: 

        const Card *deck[deckSize];

        Deck();
        ~Deck();

        void shuffle();
        void print()    const;
        
};
#endif //DECK_H
