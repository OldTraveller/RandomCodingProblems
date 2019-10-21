#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      vector<ll> store {0} ;
      ll value = 0 ;

      ll i = 1 ; 
      while( value <= 1e9 ) {
            store.push_back( store[i-1] + i ) ; 
            i++ ; 
            value = store[i-1] ; 
      }
      
      int t ; 
      cin >> t ;
      
      while( t-- ) {
            ll x ; 
            cin >> x ;

            vector<ll> :: iterator upper = upper_bound( store.begin() , store.end() , x ) ; 
            vector<ll> :: iterator lower ; 
            
            bool is_it_there = false ;

            auto hey = find( store.begin() , store.end() , x ) ;

            if( hey != store.end() ) {
                  lower = hey ; 
                  is_it_there = true ; 
            }
            else {
                  lower = upper - 1 ;
            }

            
            if( is_it_there ) {
                  cout << lower - store.begin() << endl ;
            }
            else {
                  ll value_low = x - *lower ; 
                  ll value_high = *upper - x ;

                  if( value_low > value_high ) {
                        cout << upper - store.begin() + value_high << endl ;
                  }
                  else {
                        cout << lower - store.begin() + value_low << endl ;
                  }
            }
      }
}
