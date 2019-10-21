#include <bits/stdc++.h>
using namespace std ;

int main() {
	int n ; cin >> n ; 
	string name ; cin >> name ;
	int c = 0 ;
	for( int i = 0 ; i < n - 2 ; i++ ) {
		if( name.at(i) == 'x' and name.at(i+1) == 'x' and name.at(i+2) == 'x' ) 
			c++ ; 
	}
	cout << c << endl ; 
}
