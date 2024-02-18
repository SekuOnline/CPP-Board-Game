#include "./headers/ArmyCard.h"

/**
 * @brief Construct a new Army Card object
 * 
 * Both params are functional titles suitable for display on the card itself.
 * @param title 
 * @param armyType 
 */
ArmyCard::ArmyCard(string title, ArmyType armyType) : Card(title){
    std::cout<<"ArmyCard created: "<<title<<endl;
    type = armyType;
}

ArmyCard::~ArmyCard(){
    std::cout<<"Spellcard destructor called"<<endl;
}

ArmyType ArmyCard::getArmyType() const{
    return this->type;
}

void ArmyCard::print() const{
    std::cout<<"Print"<<endl;
}

