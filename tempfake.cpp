#include <bits/stdc++.h>
using ll = long long ;  
using namespace std ;

int main() {
	ios_base :: sync_with_stdio(false) ; 
	cin.tie(nullptr) ; 
	cout.tie(nullptr) ; 
	
	ll t ; cin >> t ;
	while( t-- ) {
		ll n , q ; 
		cin >> n >> q ; 
		unordered_map<ll,ll> positions ; 
		positions.clear() ; 
		vector<ll> arr(n) ; 
		for( ll i = 0 ; i < n ; i++ ) {
			cin >> arr[i] ; 
			positions[arr[i]] = i ; 
		}
		vector<ll> temp(arr) ; 	
		sort( temp.begin() , temp.end() ) ;
		while( q-- ) {
			ll x ; 
			cin >> x ;
			auto it = lower_bound( temp.begin() , temp.end() , x ) ; 
			ll smaller = it - temp.begin() ; 
			ll larger = temp.end() - it - 1  ; 
			ll pos = positions[x] ; 
                  
                  ll start = 0 ; 
                  ll end = n - 1 ; 
                  ll c = 0 ; 
                  int smallf = 0 , largef = 0 ; 
                  while( start <= end ) {
                        ll mid = (start+end)/2 ; 
                        if(mid == pos) break ; 
                        else if( pos < mid and arr[mid] > arr[pos] ) {
                              if( larger <= 0 ) {
                                    c = -1 ; break ;
                              }
                              larger-- ;
                              end = mid - 1 ;
                              continue ;
                        } else if( pos < mid and arr[mid] < arr[pos] ) {
                              if( largef > 0 ){
                                    end = mid - 1 ; largef-- ;
                                    continue ; 
                              }
                              if( smaller <= 0 or larger <= 0) {
                                    c = -1 ; break ; 
                              } else {
                                    smaller-- ; larger-- ; 
                                    c++ ; 
                                    smallf++ ;
                                    end = mid - 1 ; 
                                    continue ; 
                              }
                        } else if ( pos > mid and arr[mid] < arr[pos] ) {
                              if( smaller <= 0) {
                                    c = -1 ; break ; 
                              } else {
                                    smaller-- ; start = mid + 1 ; 
                                    continue ; 
                              }
                        } else {
                              if(smallf > 0){
                                    start = mid + 1 ; smallf-- ;
                                    continue ; 
                              }
                              if(smaller <= 0 or larger <= 0) {
                                    c = -1 ; break ;
                              }
                              smaller-- ; larger-- ;
                              c++ ; 
                              largef++ ;
                              start = mid + 1 ; 
                              continue ;
                        }
                  }
                  cout << c << endl ;
		}
	}
}
