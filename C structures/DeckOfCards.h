#include<string>
#include<array>

struct Card
{
    /* data */
    std::string face;
    std::string suit;
};


class DeckOfCards{
public:

    static const int numberOfCards{52};
    static const int numberOfFaces{13};
    static const int numberOfSuits{4};

    DeckOfCards(); // the initializer of Deck of Cards
    void shuffle(); // for shuffle the cards
    void deal() const;

private:
    std::array<Card, numberOfCards> cards;
};
