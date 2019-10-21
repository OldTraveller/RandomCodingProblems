    #include <bits/stdc++.h>
    using namespace std ;
    using ll = long long ;
     
    int main() {
          ios :: sync_with_stdio(false) ;
          cin.tie( nullptr ) ;
          cout.tie( nullptr ) ;
     
          int t ; 
          cin >> t ;
     
          while( t-- ) {
                ll n ; 
                cin >> n ; 
     
                ll arr[n] ; 
                vector<ll> dugna ; 
     
                for( ll i = 0 ; i < n ; i++ ) {
                      cin >> arr[i] ;
                }
     
                sort( arr , arr + n ) ; 
                for( ll i = 0 ; i < n ; i++ ) {
                      dugna.push_back( 2*arr[i] ) ;
                }
                
                ll count = 0 ; 
                for( ll i = 0 ; i < n ; i++ ) {
                      for( ll j = i+1 ; j < n ; j++ ) {
                            if( binary_search( dugna.begin() , dugna.end() , arr[i]+arr[j] )) {
                                  count++ ; 
                            }
                      }
                }
                cout << count << endl ;
          }
    } 