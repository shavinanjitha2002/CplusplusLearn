#include<iostream>
#include<string>
#include<array>
#include<iomanip>
#include<cstdlib>
#include<ctime>

#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards(){
    // defined the faces of the deck
    static string suits[numberOfSuits] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // defined the suits of the deck
    static string faces[numberOfFaces] = {"Ace", "Deuse", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                                "Ten", "Jack", "Queen", "King"};
    // fill  the deck of cards
    for (size_t i{0}; i < numberOfCards; ++i){
        cards[i].suit = suits[i / numberOfFaces];
        cards[i].face = faces[i % numberOfFaces];
    }

    srand(static_cast<size_t>(time(nullptr))); // seed random generator

}

// shuffle cards randomly
void DeckOfCards::shuffle(){

    for (size_t i{0}; i < numberOfCards; i++){
        int j{rand() % numberOfCards};

        Card temp = cards[j];
        cards[j] = cards[i];
        cards[i] = temp;
    }

}

// display each card's face and suits
void DeckOfCards::deal() const{

    for (size_t i{0}; i < numberOfCards; i++){
        cout << right << setw(5) << cards[i].face << " of " << right << setw(8) << cards[i].suit << 
            ((i + 1) % 2 ? '\t' : '\n');
    }
}



