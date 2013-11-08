
#include "Actor.h"
class Player : public Actor{
public:
	
	void deal(){
		gameSetup();
		
	}
	void Hit(int index){
		cards[index] = cRandom();
	}


private:

};