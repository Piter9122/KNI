#include <iostream>

using namespace std;

#define N 10
#define MEJN int main(){
#define RITERN return 0;}	
#define PENTLA for(int i = 0; i < N; ++i){
#define KONIEC_PENTLI }

#define WARUNECZEK(x) if(x){
#define RANDOMIK rand()%2
#define LUB_NIE

MEJN
	PENTLA
	
		WARUNECZEK(RANDOMIK)
			cout << ":-)" << endl;
		ALBO_NIE
			cout << ":-(" << endl;
	
	KONIEC_PENTLI
RITERN
