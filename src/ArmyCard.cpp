#include "./headers/ArmyCard.h"

/**
 * @brief Construct a new Army Card object
 * 
 * Both params are functional titles suitable for display on the card itself.
 * @param title 
 * @param armyType 
 */
ArmyCard::ArmyCard(string title, ArmyType armyType) : Card(title){
    type = armyType;
}

ArmyCard::~ArmyCard(){

}

ArmyType ArmyCard::getArmyType() const{
    return this->type;
}