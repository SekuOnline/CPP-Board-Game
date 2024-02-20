#include "./headers/Card.h"

/*
-------------------------------------------------------------------------------
De/Constructing
-------------------------------------------------------------------------------
*/

Card::Card(string name){
    std::cout<<"Card constructor called"<<endl;
    title = name;
};

Card::~Card(){
    std::cout<<"Card Destructor called"<<endl;
}

/*
-------------------------------------------------------------------------------
Methods
-------------------------------------------------------------------------------
*/

void Card::print() const{
    cout<<"Card name:"<<this->getTitle()<<endl;
};


/*
-------------------------------------------------------------------------------
Getters / Setters
-------------------------------------------------------------------------------
*/

string Card::getTitle() const{
    return this->title;
}

string Card::getCardText() const{
    return this->cardText;
}