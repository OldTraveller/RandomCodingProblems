#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

// TLE SOLUTION means its not a solution ! :-/
int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t ;
      string culprit = "100" ; 
      for( int i = 1 ; i <= t ; i++ ) {

            string given ; 
            cin >> given ; 

            size_t pos = given.find( culprit ) ; 
            
            while( pos != string::npos ) {
                  given.erase( pos , culprit.length() ) ;
                  pos = given.find(culprit) ;
            }

            if( given.empty() ) {
                  cout << "Case " << i << ": " << "yes" << endl ;
            }
            else {
                  cout << "Case " << i << ": " << "no" << endl ;
            }
      }
}