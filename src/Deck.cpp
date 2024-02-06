#include "./headers/Deck.h"

Deck::Deck(){
    
}

/**
 * @brief Swap-Shuffle, goes through each index up to the # of cards remaining
 * and swaps the position with another card randomly.
 * If there is <= 1 card, the deck cannot be shuffled.
 * 
 * A CardTemplate class is used so that the function may be inherited by all other card types.
 */
template <class CardTemplate>

void Deck:: shuffle(CardTemplate* tempCard){
    if (cardsRemaining <= 1) return;
    srand((unsigned) time(0));
    int index;
    for(int i = 0; i < cardsRemaining; i++){
        index = (rand() % cardsRemaining);
        tempCard = deck[index];
        deck[index] = deck[i];
        deck[i] = tempCard;
    }
}


/**
 * @brief Currently prints # of cards remaining.
 * May be expanded as more functionality is added to the classes.
 */
void Deck::print() const{
    cout<<"Cards Remaining: "<<cardsRemaining<<endl;
}