#include "./headers/Card.h"

Card::Card(string name){
    std::cout<<"Card constructor called"<<endl;
    title = name;
};

Card::~Card(){
    std::cout<<"Card Destructor called"<<endl;
}

void Card::print() const{
    cout<<"Card name:"<<this->getTitle()<<endl;
};

string Card::getTitle() const{
    return this->title;
}

string Card::getCardText() const{
    return this->cardText;
}