#ifndef CARD_H
#define CARD_H


#include <string>

using namespace std;

class Card{
    public:
        const string title;
        const string cardText;

        Card(string title);
        ~Card();
        
        string getTitle()       const;
        string getCardText()    const;
        virtual void print()    const;

};

#endif