// #define CONFIG_CATCH_MAIN
// #include "catch2.hpp"
#include "../src/ArmyCard.cpp"
#include "../src/SpellCard.cpp"
#include "../src/SpellDeck.cpp"
#include "../src/ArmyDeck.cpp"

int main(){

    SpellDeck* testDeck = new SpellDeck();
    SpellCard* card1 = new SpellCard("Fireball", FIRE);
    // SpellCard* card2 = new SpellCard("Magic Missile", WIND);
    // SpellCard* card3 = new SpellCard("Earthquake", LAND);
    // SpellCard* card4 = new SpellCard("Tsunami", WATER);

    testDeck->addCard(card1);
    // testDeck->addCard(card2);
    // testDeck->addCard(card3);
    // testDeck->addCard(card4);

    // SpellDeck* shuffled = testDeck->clone();
    
    // testDeck->print();
    // shuffled->print();
}
