#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n , k ;
      cin >> n >> k ; 

      bool tweets[n] ;
      memset( tweets , 0 , sizeof(tweets) ) ;
      for( int i = 0 ; i < k ; i++ ) {
            string here ;
            cin >> here ;

            if( here == "CLICK" ) {
                  int number ;
                  cin >> number ;
                  tweets[number-1] ^= 1 ;
            }
            else {
                  memset( tweets , 0 , sizeof(tweets) ) ;
            }
            cout << count( tweets , tweets + n , 1 ) << endl ;            
      }
}