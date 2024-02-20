// #define CONFIG_CATCH_MAIN
// #include "catch2.hpp"
#include "./headers/SpellCard.h"
#include "./headers/SpellDeck.h"
#include <assert.h>

using namespace std;

int main(){
    SpellCard* card1 = new SpellCard("Snip", WIND);
    SpellCard* card2 = new SpellCard("Gwen", FIRE);
    SpellCard* card3 = new SpellCard("Water Whip", WATER);
    SpellCard* card4 = new SpellCard("Earthquake", LAND);
    SpellDeck* sDeck = new SpellDeck();

    sDeck->addCard(card1);
    sDeck->addCard(card2);
    sDeck->addCard(card3);
    sDeck->addCard(card4);

    std::cout<<"Before getCard"<<endl;
    Card* cardRef;
    sDeck->getCard(0, &cardRef);
    std::cout<<"After getCard"<<endl;

    //card1->print();

    cardRef->print();
    std::cout<<"Running 'Get Card' Test"<<endl;
    assert(cardRef == card1);
    std::cout<<"Get Card Test Passed";
    // sDeck->print();
    // SpellCard* tempCard;
    // sDeck->shuffle(tempCard);
    
    // sDeck->print();
    
}
