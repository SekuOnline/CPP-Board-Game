#ifndef ARMYDECK_H
#define ARMYDECK_H

#include "Deck.h"
#include "ArmyCard.h"

class ArmyDeck : public Deck{
    public:
        ArmyCard *deck[deckSize];

        ArmyDeck();
        ~ArmyDeck();

};
#endif //ARMYDECK_H

