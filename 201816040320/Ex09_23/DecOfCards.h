#include "Card.h"
#include <vector>
using namespace std;

class DeckOfCard
{
private:
    vector<Card> deck;

public:
    DeckOfCard();
    void shuffle();
    Card dealCard();

} ;
