#include <bits/stdc++.h>
using namespace std ;

int main() {
	ios :: sync_with_stdio(false) ; 
	cin.tie(nullptr) ;
	cout.tie(nullptr) ;
	
	int t ; 
	cin >> t ;

	while( t-- ) {
		string given ; 
		cin >> given ; 
		
		int count = 0 ; 
		
		for( int i = 1 ; i < 8 ; i++ ) {
			if( given[i] != given[i-1] )
				count++ ;
		}

		if( given[0] != given[7] ) {
			count++ ; 
		}

		if( count <= 2 ) {
			cout << "uniform" << endl ;
		}
		else {
			cout << "non-uniform" << endl ;
		}
	}
}