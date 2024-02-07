objects = Card.o SpellCard.o ArmyCard.o Deck.o SpellDeck.o ArmyDeck.o 

gameExec: $(objects)
	g++ -o gameExec $(objects)

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp

# DeckTest.o: catch2.hpp DeckTest.cpp
# 	g++ -c DeckTest.cpp
Card.o: ./src/headers/Card.h ./src/Card.cpp
	g++ -c ./src/Card.cpp

SpellCard.o: ./src/headers/SpellCard.h ./src/SpellCard.cpp
	g++ -c ./src/SpellCard.cpp

ArmyCard.o: ./src/headers/ArmyCard.h ./src/ArmyCard.cpp
	g++ -c ./src/ArmyCard.cpp

Deck.o: ./src/headers/Deck.h ./src/Deck.cpp
	g++ -c ./src/Deck.cpp

SpellDeck.o: ./src/headers/SpellDeck.h ./src/SpellDeck.cpp
	g++ -c ./src/SpellDeck.cpp

ArmyDeck.o: ./src/headers/ArmyDeck.h ./src/ArmyDeck.cpp
	g++ -c ./src/ArmyDeck.cpp

clean:
	rm -f /src/*.o