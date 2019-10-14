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
    Card(string Ranks[], string Suits[]);

    
private:
    static const string Ranks[];
    static const string Suits[];
    int value;
    
    
};

#endif /* card_h */
