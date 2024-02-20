#ifndef DECK_H
#define DECK_H

#include "defs.h"
#include "Card.h"
class Deck{

    public: 

        Deck();
        ~Deck();

        
        void shuffle(Card* tempCard);
        
        void addCard(Card* card);
        
        void setCardsRemaining(int numCards);
        void print();

        virtual Deck* clone() const = 0;

        void getCard(int index, Card** cardPtr);

    private:
        int cardsRemaining;
        Card* deck[deckSize];
        
};
#endif //DECK_H
