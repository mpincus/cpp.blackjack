
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
	dealer.cardDisplay();
	player.cardDisplay();
	system("pause");
	return 0;
}