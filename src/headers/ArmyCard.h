#ifndef ARMY_H
#define ARMY_H

#include "Card.h"



class ArmyCard : public Card{
    public:
        ArmyType type;

        ArmyCard(string title, ArmyType type);
        ~ArmyCard();

        void print() const;

        ArmyType getArmyType() const;
};
#endif //ARMY_H