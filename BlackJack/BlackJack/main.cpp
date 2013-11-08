
#include <iostream>
#include "Player.h"
#include "Dealer.h"


int main(){
	Player player;
	Dealer dealer;

	randSetup();
	for(int i = 0;i<5;i++){
	dealer.deal();
	dealer.firstDisplay();
	player.deal();
	player.finalDisplay();
	}
	system("pause");
	return 0;
}