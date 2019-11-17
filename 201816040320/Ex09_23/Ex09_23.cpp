#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <vector>

using namespace std;

int main()
{
    DeckOfCard poker;
    poker.shuffle();
    vector<Card> zhao;
    vector<Card> qian;
    vector<Card> sun;
    vector<Card> li;
    for(int i=0;i<13;++i)
        zhao.push_back(poker.dealCard());
    for(int i=0;i<13;++i)
        qian.push_back(poker.dealCard());
    for(int i=0;i<13;++i)
        sun.push_back(poker.dealCard());
    for(int i=0;i<13;++i)
        li.push_back(poker.dealCard());
    cout <<"赵先生的手牌："<<endl;
    for(int i=0;i<13;++i)
        cout<<zhao[i].toString()<<endl;
    cout <<"\n钱先生的手牌："<<endl;
    for(int i=0;i<13;++i)
        cout<<qian[i].toString()<<endl;
    cout <<"\n孙先生的手牌："<<endl;
    for(int i=0;i<13;++i)
        cout<<sun[i].toString()<<endl;
    cout <<"\n李先生的手牌："<<endl;
    for(int i=0;i<13;++i)
        cout<<li[i].toString()<<endl;

}
