#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll money ;
      int n , m ; 
      cin >> money >> n >> m ; 

      ll key[n] ; 
      ll mouse[m] ;

      for( int i = 0 ; i < n ; i++ ) {
            cin >> key[i] ; 
      }

      for( int i = 0 ; i < m ; i++ ) {
            cin >> mouse[i] ; 
      }

      ll maximum = LLONG_MIN ; 

      for( ll i = 0 ; i < n ; i++ ) {
            for( ll j = 0 ; j < m ; j++ ) {
                  ll price = mouse[j] + key[i] ; 
                  if( price <= money ) {
                        if( price >= maximum ) {
                              maximum = price ; 
                        }
                  }
            }
      }

      if( maximum == LLONG_MIN ) {
            cout << -1 << endl ; 
      }
      else {
            cout << maximum << endl ;
      }
}