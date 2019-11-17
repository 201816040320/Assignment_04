#include <iostream>
#include "Card.h"
#include <string.h>
using namespace std;

string Card::f[13]={"A","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
string Card::s[4]={"Spade","Heart","Diamond","Club"};
Card::Card(int a,int b)
{
    face=a;
    suit=b;
}

string Card::toString()
{
    return (f[face]+" of "+s[suit]);
}
