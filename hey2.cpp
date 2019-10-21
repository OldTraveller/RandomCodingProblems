#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n , programmer , athletes ; 
      cin >> n >> programmer >> athletes ; 

      string position ; 
      cin >> position ; 

      ll count = 0 ; 
      ll count_dots = 0 ; 
      for( ll i = 0 ; i < n ; i++ ) {
            if( position.at(i) == '*' ) {
                  continue ; 
            }
            else {
                  count_dots++ ; 
            }
      }
      
      ll greater = max( programmer , athletes ) ; 
      ll smaller = programmer + athletes - greater ; 

      count = min( greater , count_dots - (ll)ceil(count_dots/2) ) ;
      count += min( smaller , count_dots - count ) ;

      cout << count << endl ;
}
