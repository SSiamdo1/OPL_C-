//
//  main.cpp
//  SSiamdoust_OPL_C++
//
//  Created by Shahryar Siamdoust 
//  Copyright © 2019 Shahryar Siamdoust. All rights reserved.
//

#include <iostream>
#include <string>
#include "includes.h"
#include "card.h"
#include "deck.h"

int main() {
    
   //Deck first_deck[58];
    Deck first_deck;
    Deck second_deck;
    int value = 0;
    int value2 = 1;
    string card = "";
    
    first_deck.Create_Deck();
    first_deck.Shuffle_Cards();
    second_deck.Create_Deck();
    second_deck.Shuffle_Cards();
    second_deck.Shuffle_Cards();
 
    
    vector<Card>Draw_Pile;
    vector<string>Discard_Pile;
    vector<string>Player_Cards;
    vector<string>Computer_Cards;
    
    
    
    for (int i = 0; i < DECK; i++) {
        
        Draw_Pile.push_back(first_deck.Return_Deck(i));
       // first_deck[i].card = first_deck[i].Get_Card(i);
        
         Draw_Pile.push_back(second_deck.Return_Deck(i));
    }
  
   
    
    for (int i = 0; i < DECK*2; ++i) {
        
       /* cout << endl << i << "- Rank is ";
        Draw_Pile[i].Get_Rank();
        cout << endl << " Suit is ";
        Draw_Pile[i].Get_Suit();*/
        
        cout << i << ": ";
        cout << Draw_Pile[i].Get_Full_Card();
        cout << endl;
        
     
    }
    
    //cout << Draw_Pile[53].at(0) << endl;
    
    
    return 0;
}
