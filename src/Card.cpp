#include "./headers/Card.h"

Card::Card(string title){
    title = title;
};

void Card::print() const{
    cout<<"Card name:"<<title<<endl;
};

string Card::getTitle() const{
    return this->title;
}

string Card::getCardText() const{
    return this->cardText;
}