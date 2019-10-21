#include <bits/stdc++.h> 
using namespace std ;

bool isOdd ( int n ) { return n%2 == 1 ; } 

int main() {
	string str ; cin >> str ;
	unordered_map<char,int> to_check ; 
	for ( int i = 0 ; i < str.size() ; i++ ) to_check[str.at(i)]++ ;
	int len = str.length() ; 
	if ( isOdd( len ) or isOdd( len/2 ) ) {
		cout << "impossible" << endl ;
		return 0 ; 
	}
	for ( auto it : to_check ) if ( isOdd( it.second ) ) {
		cout << "impossible" << endl ; 
		return 0 ; 
	} 
	char last_seen_first ;
	char last_seen_second ; 	
	int per_seq = len/2 ; 
	int open_per_seq = len/4 ; 
	int counts_fir = 0 ;
	int ans[len] ; memset( ans , 0 , sizeof ans ) ; 
	for ( int i = 0 ; i < len ; i++ ) {
		if ( str.at(i) == '(' or str.at(i) == '[' ) {
			if ( counts_fir < open_per_seq ) {
				ans[i] = 1 ; last_seen_first = str.at(i) ; counts_fir++ ;  
			} else {
				ans[i] = 2 ; last_seen_second = str.at(i) ;
			}
		} else {
			if ( str.at(i) == ']' ) {
				if ( last_seen_first == '[' ) {
					ans[i] = 1 ; last_seen_first = str.at(i) ; 
				} else {
					ans[i] = 2 ; last_seen_second = str.at(i) ; 
				}
			} else {
				if ( last_seen_first == '(' ) {
					ans[i] = 1 ; last_seen_first = str.at(i) ; 
				} else {
					ans[i] = 2 ; last_seen_second = str.at(i) ;   
				}
			}
		}
	} for ( int a : ans ) cout << a << " " ; 
}
