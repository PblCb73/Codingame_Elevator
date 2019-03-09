#include "elevator.h"

using namespace std;

int testElevator( int n, int a, int b, int k, int m )
{
	set<int> floors;
	//Если мы были уже на текущем этаже, значит решения нет
	while( floors.find( k ) == floors.end() ){
		floors.insert( k );//Добавим текущий этаж во множество этажей, на которых мы были
		//Важен порядок проверки
		if( ( k < m ) && ( k + a <= n ) ) k += a;//Текущий этаж ниже чем требуемый, и можно двигаться на верх
		else if( ( k < m ) && ( k - b > 0 ) ) k -= b;//Текущий этаж ниже чем требуемый, и можно двигаться вниз
		else if( ( k > m ) && ( k - b > 0 ) ) k -= b;//Текущий этаж выше чем требуемый, и можно двигаться вниз
		else if( ( k > m ) && (  k + a <= n ) ) k += a;//Текущий этаж выше чем требуемый, и можно двигаться на верх
		if( k == m )return floors.size();
	}
	return 0;
}