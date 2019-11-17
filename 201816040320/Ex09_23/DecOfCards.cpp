#include "DeckOfCards.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Card.h"

DeckOfCard::DeckOfCard()
{
    int a,b;
    for(int i=0;i<52;++i)
    {
        a=i%13;
        b=i/13;
        Card temp(a,b);
        deck.push_back(temp);
    }
}

void DeckOfCard::shuffle()
{
    srand(int (time(0)));
    int second;
    for(int i=0;i<52;++i)
    {
        second = rand()%deck.size();
        Card temp=deck[second];
        deck[second]=deck[i];
        deck[i]=temp;
    }


}

Card DeckOfCard::dealCard()
{
    Card temp=deck[0];
    deck.erase(deck.begin());
    return temp;
}
