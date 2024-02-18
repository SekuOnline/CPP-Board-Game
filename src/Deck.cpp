#include "./headers/Deck.h"

Deck::Deck(){
    cardsRemaining = 0;
    std::cout<<"Core-Deck created"<<endl;
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
 * @brief sets the number of remaining cards
 * Cannot set cards remaining to a number greater than the max decksize.
 * @param numCards new cardsRemaining value
 */
void Deck::setCardsRemaining(int numCards){
    if (numCards > deckSize) return;
    cardsRemaining = numCards;
}

/**
 * @brief Adds a card to the deck if there is an open spot available.
 * Cannot add a card if decksize would be exceeded.
 * The card must be created elsewhere and put into the deck through a pointer.
 * @param card is a ptr to the card being added to the deck
 */

template <class CardTemplate>
void Deck::addCard(CardTemplate* card){
    if (cardsRemaining >= deckSize) return;
    deck[cardsRemaining] = card;
    cardsRemaining++;
}


/**
 * @brief Currently prints # of cards remaining.
 * May be expanded as more functionality is added to the classes.
 */
void Deck::print() const{
    cout<<"Cards Remaining: "<<cardsRemaining<<endl;
    for(int i = 0; i < cardsRemaining; i++){
        deck[i]->print();
    }
}