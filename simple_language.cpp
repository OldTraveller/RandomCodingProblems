#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ; 
      cin >> n ; 

      ll x = 0 ; 
      for( ll i = 0 ; i < n ; i++ ) {
            string name ; 
            cin >> name ; 

            if( name == "add" ) {
                  ll number ; 
                  cin >> number ;
                  if( x + number > x ) {
                        x += number ; 
                  }
            }
            else if( name == "set" ) {
                  ll number ;
                  cin >> number ; 

                  if( number > x ) {
                        x = number ;
                  }
            }
      }

      cout << x << endl ;
}