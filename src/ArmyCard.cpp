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

void  ArmyCard::printArmyType() const{
    switch(type){
        case 0: std::cout<<"Human"<<endl;       break;
        case 1: std::cout<<"Angel"<<endl;       break;
        case 3: std::cout<<"Undead"<<endl;      break;
        case 4: std::cout<<"Hallowed"<<endl;    break;
        default: std::cout<<"Other"<<endl;
        
    }
}


