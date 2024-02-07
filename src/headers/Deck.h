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
        
        template <class CardTemplate>
        void addCard(CardTemplate* card);
        
        void setCardsRemaining(int numCards);
        void print()    const;

        virtual Deck* clone() const = 0;

    
        
        
};
#endif //DECK_H
