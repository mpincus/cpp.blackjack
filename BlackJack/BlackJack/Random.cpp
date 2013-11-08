#include <cstdlib>
#include <ctime> 




int cRandom(){

		
		int random_int = (rand()%13)+1; 
		return random_int;

}
void randSetup(){
	time_t seconds;
	time(&seconds);
	srand((unsigned int)seconds);
}