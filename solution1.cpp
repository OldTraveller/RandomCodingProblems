#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ; 

      string one = "ch" ; 
      string two = "he" ; 
      string three = "ef" ; 
      
      ll count = 0 ; 
      while( n-- ) {
            string name ; 
            cin >> name ; 

            if( name.find(one) != string :: npos || name.find(two) != string :: npos || name.find(three) != string :: npos ) {
                  count++ ; 
            }
      }
      cout << count << endl ;
}