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

        
        void shuffle(Card* tempCard);
        
        void addCard(Card* card);
        
        void setCardsRemaining(int numCards);
        void print();

        virtual Deck* clone() const = 0;
        
};
#endif //DECK_H
