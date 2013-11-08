#include <cstdlib>
#include <ctime> 
int cRandom(){

		srand((unsigned)time(0));
		int random_int = (rand()%13)+1; 
		return random_int;

}