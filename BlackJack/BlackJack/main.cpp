#pragma once
#include <iostream>
#include "Player.h"
#include "Dealer.h"

int main(){
	Player player;
	Dealer dealer;

	dealer.deal();
	dealer.firstDisplay();
	player.deal();
	player.finalDisplay();
	return 0;
}