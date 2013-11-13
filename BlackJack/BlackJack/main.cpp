
#include <iostream>
#include "Player.h"
#include "Dealer.h"
void playGame(Player player, Dealer dealer);
bool hitCard(Player player);

int main(){
	Player player;
	Dealer dealer;
	char answer;

	randSetup();
	std::cout << "would you like to play a game?(y/n) ";
	std::cin >> answer;
	if ((answer == 'y') || (answer == 'Y')){
		playGame(player, dealer);
	}
	else
		std::cout << "\nyou declined the game";

	dealer.cardDisplay();
	player.cardDisplay();
	system("pause");
	return 0;
}

void playGame(Player player, Dealer dealer){
	
	dealer.deal();
	dealer.firstDisplay();
	player.deal();
	player.finalDisplay();
	while (hitCard(player)){
		
		player.finalDisplay();
	}


}

bool hitCard(Player player){
	char cHit;
	std::cout << "Would you like to hit?(y/n) ";
	std::cin >> cHit;
	if (cHit == 'y' || cHit == 'Y'){
		player.Hit();
		return true;
	}
	else
		return false;

}