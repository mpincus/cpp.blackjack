
#include "Actor.h"
class Player : public Actor{
public:
	
	Player::Player(){}
	
	void deal(){
		gameSetup();
		
	}
	void Hit(){
		
		for (int i = 0; i < 5; i++){
			if (this->cards[i] == 0){
				this->cards[i]=cRandom();
				std::cout << cards[i];
				break;
			}
		}
	
	}


private:

};