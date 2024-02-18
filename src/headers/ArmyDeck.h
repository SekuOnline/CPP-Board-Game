#ifndef ARMYDECK_H
#define ARMYDECK_H

#include "Deck.h"
#include "ArmyCard.h"

class ArmyDeck : public Deck{
    public:
        ArmyCard *deck[deckSize];

        ArmyDeck();
        ~ArmyDeck();

        Deck* clone() const{return new ArmyDeck(*this);}


};
#endif //ARMYDECK_H

