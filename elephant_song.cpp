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

            ll B[n] ; 
            ll L[n] ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> B[i] >> L[i] ;
            }

            sort( B , B + n ) ;
            sort( L , L + n ) ;

            ll answer = 0 ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  answer += ( B[i]*L[i] ) ;
            }

            cout << answer << endl ;
      }
}