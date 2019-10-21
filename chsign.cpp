#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ; cin >> t ;

      while( t-- ) {
            ll n ; cin >> n ; 
            ll arr[n] ; 
            for( ll i = 0 ; i < n ; i++ ) cin >> arr[i] ; 

            ll answer = ( -arr[0] + arr[1] > 0 ) ? -arr[0] : arr[0] ; 
            cout << answer ; 
            for( ll i = 1 ; i < n ; i++ ) {
                  if( arr[1])
            }
      }
}