#include "Random.h"
#include <iostream>
class Dealer{
public:
	Dealer(){
		 
	}
	void deal(){
		for(int i = 0; i<6;i++){
			this->cards[i] = 0;
		}
		this->cards[0] = cRandom();				//fill card one
		this->cards[1] = cRandom();				//fill card 2
		if(this->cards[0] == 1) cards[0] = 11;	//if rand gets 1 change to ace
		if(this->cards[1] == 1) cards[1] = 11;	//if rand gets 1 change to ace
		this->score = cards[0] + cards[1];		//calculate current score
		if(this->score > 21){					//if score > 21, ie both start cards are aces
				if(cards[0] == 11) cards[0]=1;		//change first card to 1 
				this->score = cards[0] + cards[1];	//calculate current score
		}		
												//recalculate score for picture cards
		if((cards[0] = 11) || (cards[1] = 11)){
			score -= 1;
		}
		if((cards[0] = 12) || (cards[1] = 12)){
			score -= 2;
		}
		if((cards[0] = 13) || (cards[1] = 13)){
			score -=3;
		}		

	}
												//display dealer cards method
	void firstDisplay(){
		 std::cout<<"["<<this->cards[0]<<"]"<<" [ ]\n";
	}

	void game(){								//Dealer game logic

		for(int i = 2; this->score < 17; i++){	//hit if less than 17
			this->score=0;
			this->cards[i] = cRandom();			//add anoher card
			for(int j = 0; j<=i;j++){			//recalculate score			
				this->score += cards[j];
			}
			if(this->score > 21){				//if dealer busts check for ace
				for(int k=0; k<=i; k++){
					if(cards[k] == 1){
						cards[k] = 1;			//change ace to a 1

					}
				}
				for(int j = 0; j<=i;j++){			//recalculate score			
				this->score += cards[j];
				}
			}
		}
	}
	std::string finalDisplay(){
		for(int i =0;i<6;i++){
			if(this->cards[i] != 0){
				std::cout<<"["<<cards[i]<<"] ";
			}
		}
	}
	int calcDScore(){
		calcScore(this);
	}
	int getScore(){
		return this->score;
	}

private:
	int cards[5];
	int score;

};