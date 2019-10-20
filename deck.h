//
//  deck.h
//  SSiamdoust_OPL_C++
//
//  Created by Shahryar Siamdoust on 10/14/19.
//  Copyright © 2019 Shahryar Siamdoust. All rights reserved.
//

#ifndef deck_h
#define deck_h

#include "includes.h"
#include "card.h"



class Deck {
public:
    Deck();
    string Suit_of_Card;
    string Rank_of_Card;
    void Create_Deck();
    void Shuffle_Cards();
    Card Return_Deck(int card_number);
    //void Create_Card();
    string Get_Card(int card);
    Card discard_a_card(Card discarded_card);
    string cardss;
   
private:
    Card Card_Deck[58];
    //string Deck_Card_Rank;
    //string Deck_Card_Suit;
    //string card = "";
    //Card Deck_Card_Rank_obj;
    //Card Deck_Card_Suit_obj;
    
    //void shuffle();
};




#endif /* deck_h */
