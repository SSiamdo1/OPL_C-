//
//  card.cpp
//  SSiamdoust_OPL_C++
//
//  Created by Shahryar Siamdoust on 10/14/19.
//  Copyright © 2019 Shahryar Siamdoust. All rights reserved.
//

//#include "includes.h"
#include "card.h"

Card::Card(){
    
    
    Card_Rank = "";
    Card_Suit = "";
    Card_Value = 0;
    Full_Card = "";
}

 void Card::Set_Rank(int Rank) {
    

    static const string Card_Ranks[] = {"3", "4",
        "5", "6", "7", "8", "9", "X", "J", "Q",
        "K", "O"};
    
     Card_Rank = Card_Ranks[Rank];

}

void Card::Set_Suit(int Suit) {
    
    static const string Card_Suits[] = {
        "C", "D", "H", "S", "T", " " };
    Card_Suit = Card_Suits[Suit];
}

void Card:: Set_Value (int Value) {
    
    static const int Card_Values[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 50};
    
    Card_Value = Card_Values[Value];
    
}
void Card:: Set_Full_Card () {
    

    Full_Card = Card_Rank + Card_Suit;
    
}

string Card::Get_Rank() {
    
   // cout << Card_Rank;
    return Card_Rank;
    
}

string Card::Get_Suit() {
    
   // cout << Card_Suit << endl;
    return Card_Suit;
    
}

int Card::Get_Value() {
    
    return Card_Value;
}

string Card::Get_Full_Card() {
    
    //cout << Card_Rank + Card_Suit;
    return Card_Rank + Card_Suit;
}

