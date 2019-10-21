#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ;
      cin >> n ;  

      string name ;
      cin >> name ;

      ll top = 0 ;
      ll ref = 0 ; 
      ll count = 0 ; 

      for( int i = 0 ; i < name.length() ; i++ ) {
            if( ref == top && name.at(i) == 'U' ) {
                  top = ref ; 
                  ref++ ; 
            }
            else if ( ref == top && name.at(i) == 'D' ) {
                  ref-- ; 
                  count++ ; 
            }
            else if( name.at(i) == 'D' ) {
                  ref-- ; 
            }            
            else {
                  ref++ ; 
            }
      }

      cout << count << endl ;
}