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
            ll a , b , c ;
            cin >> a >> b >> c ;

            if( a+c == 2*b ) {
                  cout << 0 << endl ;
                  continue ; 
            }
            
            ll value = abs( 2*b - a - c )/2 ;
            if( (a+c)&1 ) {
                  value++ ; 
            }
            
            cout << value << endl ;
      }
}