#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ;
      cin >> t ;

      while( t-- ) {
            ll n ; 
            cin >> n ; 

            ll sum = 0 ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  ll ele ; 
                  cin >> ele ;
                  sum += ele ; 
            }

            if( sum&1 ) {
                  cout << "YES" << endl ; 
            }
            else {
                  cout << "NO" << endl ;
            }
      }
}