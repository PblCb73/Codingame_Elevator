#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a, b, k, m;    
    cin >> n >> a >> b >> k >> m; cin.ignore();
	//Решим уравнение методом подбора с условиями. Возьмем первое решение, так как может быть множество решений!
    for( int x( 0 ) ; x < n - a ; ++x ){
        if( !( ( a * x  - ( m - k ) ) % b ) ){
            cout << x + abs( a * x - ( m - k )) / b;
            return 0;
        }
    }
    cout  << "IMPOSSIBLE";
    return 0;
}