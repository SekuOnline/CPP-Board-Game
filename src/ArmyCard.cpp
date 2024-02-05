#include "./headers/ArmyCard.h"

ArmyCard::ArmyCard(string title, ArmyType armyType) : Card(title){
    type = armyType;
}

ArmyCard::~ArmyCard(){

}

ArmyType ArmyCard::getArmyType() const{
    return this->type;
}