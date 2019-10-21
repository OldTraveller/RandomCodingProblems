#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t; 

      while( t-- ) {
            int n , k ; 
            cin >> n >> k ; 

            int count = 0 ; 
            for( int i = 0 ; i < n ; i++ ) {
                  int ele ;
                  cin >> ele ;
                  if( ele <= 0 ) {
                        count++ ; 
                  }
            }

            if( count < k ) {
                  cout << "YES" << endl ; 
            }
            else {
                  cout << "NO" << endl ;
            }
      }
}