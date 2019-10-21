#include <iostream>
#include <iomanip>
using namespace std ; 

int main() {
	int  x ;
	float y ; 
	cin >> x >> y ;

	if( x >= y ) {
		cout << y << endl ; 
	}
	else {
		if( ( x%5 == 0 ) && ( y >= ( x+ 0.5 ) ) ) {
			cout << ( y - x - 0.5 ) << endl ;
		}
		else {
			cout << y << endl ;
		}
	}
}
