#ifndef CARD_H
#define CARD_H

#include "defs.h"

using namespace std;

class Card{
    public:
        string title;
        string cardText;

        Card(string title);
        ~Card();
        
        string getTitle()       const;
        string getCardText()    const;
        virtual void print()    const;

};

#endif