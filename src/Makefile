#be very careful with commends - spaces can cause errors.

ifeq ($(OS),Windows_NT)
    SHELL := pwsh.exe
else
   SHELL := pwsh
endif
.SHELLFLAGS := -NoProfile -Command 

CC = g++#compilation command
IDIR = headers#include directory
ODIR = obj#obj directory

#Note: cpp files must be in the same directory as the makefile.
#This is maybe changable by changing the '%.cpp' line to include the directory.

CFLAGS = -I $(IDIR)#-I is include, then the dir.

_DEPS = Card.h SpellCard.h ArmyCard.h Deck.h defs.h SpellDeck.h ArmyDeck.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Card.o SpellCard.o ArmyCard.o Deck.o SpellDeck.o ArmyDeck.o main.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testExec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) 

.PHONY: clean

clean: 
	del testExec.exe obj\*.o