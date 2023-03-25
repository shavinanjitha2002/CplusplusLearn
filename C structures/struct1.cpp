#include<iostream>
#include<string>

using namespace std;

struct Card{
    string position;
    int type;
};

int main(){

    Card card1{"shavin", 45};
    Card* card2;
    Card cards[10];

    // use alias for Card structure
    typedef Card* CardPtr;
    CardPtr cardPtr1;

    return 0;
}