#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ;

      string name ;
      cin >> name ; 

      if(name=="0"){
            cout << name ;
            return 0 ;
      }
      int count1 = 0 ; 
      for( int i = 0 ; i < n ; i++ ) {
            if( name.at(i) == '1' ) {
                  count1++ ; 
            }
      }
      int rest = n - count1 ; 
      cout << "1" ;
      while(rest--){
            cout << "0" ; 
      }      
}