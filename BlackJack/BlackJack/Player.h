#include "Random.h"
#include "CardHelper.h"
class Player{
public:
	
	void deal(){
		gameSetup(this);
		
	}
	void Hit(int index){
		cards[index] = cRandom();
	}
	void finalDisplay(){
		for(int i =0;i<6;i++){
			if(this->cards[i] != 0){
				std::cout<<"["<<cards[i]<<"] ";
			}
		}
	}
	
	int calcPScore(){
		 calcScore(this);
		
	}
	int getScore(){
		return this->score;
	}

private:
	int cards[5];
	int score;
};