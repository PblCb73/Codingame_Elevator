#include <iostream>
#include <string>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n;
    int a;
    int b;
    int k;
    int m;
    cin >> n >> a >> b >> k >> m; cin.ignore();    
    
    bool flagImpossible( false );//Флаг того, что приехать на указанный этаж невозможно
    int pressCount( 0 ); //Количество нажатий
    int lastDownFloor( 0 ); //Последний этаж куда мы спускались
    
    //Поехали
    while(  k != m && !flagImpossible )
    {
        //Если лифт выше нужного этажа, будем опускаться пока не приедем на этаж или не проедем
        while(  k > m ){
             k =  k - b;
            pressCount++;
        }
        //Посмотрим, были ли мы на этом этаже уже, если мы были, то мы зациклились
        if(  k == lastDownFloor ) flagImpossible = true;
        else lastDownFloor =  k;
        //Если лифт ниже нужного этажа, будем подниматься пока не приедем на этаж или не проедем
        while(  k < m ){
             k =  k + a;
            pressCount++;
        }
        //Если лифт улетел на чердак или в подвал, это провал...
        if(  k > n ||  k < 1 ) flagImpossible = true;
    }

    if( flagImpossible )
        cout << "IMPOSSIBLE" << endl;
    else
        cout << pressCount << endl;    
}