
#include "Actor.h"

class Dealer : public Actor{
public:
	Dealer(){
		 
	}
	void deal(){
	gameSetup();	

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


private:

};