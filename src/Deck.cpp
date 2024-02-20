#include "./headers/Deck.h"
/*
-------------------------------------------------------------------------------
De/Constructing
-------------------------------------------------------------------------------
*/

Deck::Deck(){
    cardsRemaining = 0;
    std::cout<<"Core-Deck created"<<endl;
}

Deck::~Deck(){
    std::cout<<"Deck Destroyed"<<endl;
}


/*
-------------------------------------------------------------------------------
Methods
-------------------------------------------------------------------------------
*/
/**
 * @brief Swap-Shuffle, goes through each index up to the # of cards remaining
 * and swaps the position with another card randomly.
 * If there is <= 1 card, the deck cannot be shuffled.
 * 
 * @param tempCard is an empty pointer of cardType equivalent to the Deck Type.
 */

void Deck:: shuffle(Card* tempCard){
    std::cout<<"\nShuffled:"<<endl;
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


void Deck::addCard(Card* card){
    if (cardsRemaining >= deckSize) return;
    deck[cardsRemaining] = card;
    cardsRemaining++;
}


/**
 * @brief Currently prints # of cards remaining.
 * May be expanded as more functionality is added to the classes.
 */
void Deck::print(){
    cout<<"Cards Remaining: "<<cardsRemaining<<endl;
    for(int i = 0; i < cardsRemaining; i++){
        std::cout<<"Card at index: "<<i<<endl;
        deck[i]->print();
        std::cout<<endl;
    }
}

/*
-------------------------------------------------------------------------------
Getters / Setters
-------------------------------------------------------------------------------
*/

void Deck::getCard(int index, Card** cardPtr){
    if (index > deckSize || index < 0){
        std::cout<<"Invalid index"; return;
    }
    if (deck[index] == nullptr){
        std::cout<<"nullptr @ index"<<endl; return;
    }
    std::cout<<"Past condition in getCard"<<endl;
    *cardPtr = deck[index];
    std::cout<<"Set pointer"<<endl;

}