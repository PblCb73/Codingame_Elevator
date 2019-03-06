#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a, b, k, m;    
    cin >> n >> a >> b >> k >> m; cin.ignore();
	//Решим уравнение методом подбора с условиями. Возьмем первое решение, так как может быть множество решений!
    for( int x( 0 ) ; x < n ; ++x ){
        int y( abs( a * x - ( m - k ) ) / b );
        int d( a * x - y *b );
        if( d + a < n && k + d == m ){
            cout << x + y;
            return 0;
        }
    }
    cout  << "IMPOSSIBLE";
    return 0;
}