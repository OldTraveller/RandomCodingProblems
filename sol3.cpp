#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
	ll n , m ; cin >> n >> m ; 
	ll arr[n] ; 
	for( int i = 0 ; i < n ; i++ ) cin >> arr[i] ; 
	vector<ll> prefixsum(n) ; 
	prefixsum[0] = arr[0] ;
	for( int i = 1 ; i < n ; i++ ) prefixsum[i] = arr[i] + prefixsum[i-1] ;  
	for( int i = 0 ; i < m ; i++ ) {
		ll ele ; cin >> ele ;
		if( ele <= prefixsum[0] ) {
			cout << 1 << " " << ele << endl ; 
		} else {
			auto it = lower_bound( prefixsum.begin() , prefixsum.end() , ele ) ; 
			cout << it - prefixsum.begin() + 1 << " " ; 
			cout << ( ele - prefixsum[it - prefixsum.begin() - 1] )  << endl ; 
		}	
	}
}
