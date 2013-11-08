template<class type>
void gameSetup(type T){
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
template<class type>
void calcScore(type T){
	int total = 0;
	for(int i =0;i<6;i++){
			if(this->cards[i] != 0){
				total += cards[i];
			}
	}
	return total;
}