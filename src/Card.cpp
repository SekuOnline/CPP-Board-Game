#include "./headers/Card.h"

Card::Card(string title){
    std::cout<<"Card constructor called"<<endl;
    title = title;
};

Card::~Card(){
    std::cout<<"Card Destructor called"<<endl;
}

void Card::print() const{
    cout<<"Card name:"<<title<<endl;
};

string Card::getTitle() const{
    return this->title;
}

string Card::getCardText() const{
    return this->cardText;
}