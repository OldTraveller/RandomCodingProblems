#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ; 

      ll coins[n] ; 
      for( int i = 0 ; i < n ; i++ ) {
            cin >> coins[i] ; 
      }

      int type[n] ;
      for( int i = 0 ; i < n ; i++ ) {
            cin >> type[i] ;
      }

      ll min_trans = 10000000 ;
      ll min_author = 10000000 ;
      ll min_both = 10000000 ;

      for( int i = 0 ; i < n ; i++ ) {
            if( type[i] == 1 ) {
                  min_trans = min( min_trans , coins[i] ) ;
            }
            else if( type[i] == 2 ) {
                  min_author = min( min_author , coins[i] ) ; 
            }
            else {
                  min_both = min( min_both , coins[i] ) ; 
            }
      }

      cout << min( min_both , ( min_author + min_trans ) ) << endl ;
}