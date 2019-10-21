#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ; cin >> t ;
       while ( t-- ) {
              string id ; cin >> id ; 
              int len = id.length() ; 
              if ( len == 1 ) {
                     cout << 1 << endl ;
              } else {
                     int lsum , rsum ; lsum = rsum = 0 ; 
                     for ( int i = 0 ; i < len/2  ; i++ ) {
                            lsum += ( id[i] - '0' ) ;
                     }
                     for ( int i = len/2 + 1 ; i < len ; i++ ) {
                            rsum += ( id[i] - '0' ) ; 
                     }
                     if ( lsum == rsum ) cout << 1 << endl ; 
                     else cout << 0 << endl ;
              }
       }
}