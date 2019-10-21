#include <bits/stdc++.h>
using namespace std ;

int main() {
	vector< pair<int,int> > v ; 
	for( int i = 0 ; i < 5 ; i++ ) {
		int x , y ; 
		cin >> x >> y ; 
		v.push_back( make_pair<int,int>( x , y ) ) ; 
	}
	
	pair<int,int> minpair1 = v.at(0) ; 
	pair<int,int> minpair2 = v.at(1) ; 
	
	int minimum = INT_MAX ; 
	for( int i = 0 ; i < 5 ; i++ ) {
		for( int j = 0 ; j < 5 && i > j  ; j++ ) {
			int value =   abs(v.at(i).first - v.at(j).first) + abs( v.at(i).second - v.at(j).second ) ; 
			if( value  < minimum  ) {
				minpair1 = v.at(i) ; 
				minpair2 = v.at(j) ;
				minimum = value ;  
			}	 
		}
	} 
	cout << "THE PAIRS ARE : ( " << minpair1.first << " , " << minpair1.second << " ) and ( " << minpair2.first << " , " << minpair2.second << " ) "  << endl ; 
	return EXIT_SUCCESS  ;
}
