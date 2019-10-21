#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

ll GCD( ll x , ll y ) {
      if( x == 0 || y == 0 ) {
            return y+x ;
      }
      return GCD( y , x%y ) ;
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ; 
      cin >> t ; 

      while( t-- ) {
            ll x , y ;
            cin >> x >> y ;
            cout << 2*GCD( x , y ) << endl ; 
      }
}