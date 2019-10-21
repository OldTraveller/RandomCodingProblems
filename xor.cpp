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
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> arr[i] ; 
            }

            ll answer = 0 ;   
            for( ll i = 0 ; i < n ; i++ ) {
                  answer ^= ( 2*arr[i] ) ;
            }

            cout << answer << endl ;
      }
}