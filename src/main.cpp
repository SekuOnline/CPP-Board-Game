// #define CONFIG_CATCH_MAIN
// #include "catch2.hpp"
#include "./headers/SpellCard.h"
#include "./headers/SpellDeck.h"

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


    sDeck->print();
    SpellCard* tempCard;
    sDeck->shuffle(tempCard);
    
    sDeck->print();
    
}
