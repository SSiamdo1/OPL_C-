//
//  card.h
//  SSiamdoust_OPL_C++
//
//  Created by Shahryar Siamdoust on 10/14/19.
//  Copyright © 2019 Shahryar Siamdoust. All rights reserved.
//



 #ifndef card_h
#define card_h

#include "includes.h"

/*enum Value {
    
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    JOKER
    
};*/

class Card {

public:
    Card();
    void Set_Rank(int Ranks);
    void Set_Suit(int Suit);
    void Set_Value(int Value);
    void Set_Full_Card();
    string Get_Rank();
    string Get_Suit();
    string Get_Full_Card();
    int Get_Value();

    
private:
    int Card_Rank_Number;
    int Card_Suit_Number;
    string Card_Rank;
    string Card_Suit;
    string Full_Card;
    int Card_Value;
   
    
};

#endif /* card_h */
