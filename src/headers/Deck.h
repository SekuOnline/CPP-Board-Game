#ifndef DECK_H
#define DECK_H

#include "defs.h"
#include "Card.h"
class Deck{

    public: 

        int cardsRemaining;
        Card *deck[deckSize];

        Deck();
        ~Deck();

        template <class CardTemplate> 
        void shuffle(CardTemplate* tempCard);
        void print()    const;
        
};
#endif //DECK_H
