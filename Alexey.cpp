#include <bits/stdc++.h>
#define ll long long  
using namespace std ; 

ll GCD( ll a , ll b ) {
	if( a == 0 ) 
		return b ; 
	return GCD( b%a , a ) ; 	
}	

int main() {
	ll t ; 
	cin >> t ;

	while( t-- ) {
		ll n ; 
		cin >> n ; 
		
		
		ll arr[n] ; 
		for( int i = 0 ; i < n ; i++ ) {
			cin >> arr[i] ; 
		}
		ll minimum = LONG_MAX ; 
		for( int i = 0 ; i < n - 1 ; i++ ) {
			for( int j = i+1 ; j < n ; j++ ) {
				ll value = ( arr[i]*arr[j]) / GCD( arr[i] , arr[j] ) ; 
					minimum = min( value , minimum )  ;
			}	
		} 
		cout << minimum  << endl ; 
	}
	
}
