//
//  deck.cpp
//  SSiamdoust_OPL_C++
//
//  Created by Shahryar Siamdoust on 10/14/19.
//  Copyright © 2019 Shahryar Siamdoust. All rights reserved.
//

#include "deck.h"

//#include "includes.h"

Deck::Deck() {
   
    
    for (int i = 0; i < DECK; i++ ) {
        
        Card_Deck[i];
    }

    
}


    
   void Deck::Create_Deck() {
       
       int counter = 0;
       for (int i = 0; i < RANK; i++) {
           for (int j = 0; j < SUIT; j++) {
               
               Card_Deck[counter].Set_Rank(i);
               Card_Deck[counter].Set_Suit(j);
               Card_Deck[counter].Set_Full_Card();
               Card_Deck[counter++].Set_Value(i+3);
               
           }
       }
       
       for (int i = 0; i < 3; i++) {
           Card_Deck[counter].Set_Rank(11);
           Card_Deck[counter].Set_Suit(5);
           Card_Deck[counter].Set_Full_Card();
           Card_Deck[counter++].Set_Value(50);
          
       }
       
      /* for (int i = 0; i < 58; i++) {
           //cout << Card_Deck[i];
           cout << i << ": ";
           Card_Deck[i].Get_Rank();
           Card_Deck[i].Get_Suit();
           cout << endl;
       }
      */
     
    }

void Deck::Shuffle_Cards() {
    srand(time(NULL));
    for (int i = 0; i < DECK; i++) {
      
        int r = i + (rand() % (DECK -i));
            
            swap(Card_Deck[i], Card_Deck[r]);
    }
    
   

}

Card Deck::Return_Deck(int card_number) {
    
    cout << card_number << endl;
    return Card_Deck[card_number];
    
}
    
    



