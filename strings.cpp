#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      string name ; 
      cin >> name ;     

      bool sorted = true ; 
      for( int i = 1 ; i < name.length() ; i++ ) {
            if( name.at(i) < name.at(i-1) ) {
                  sorted = false ;
                  break ;
            }
      }

      int countA = 0 ;
      int countB = 0 ;
      int countC = 0 ;

      for( int i = 0 ; i < name.length() ; i++ ) {
            if( name.at(i) == 'a' ) {
                  countA++ ;
            }
            else if( name.at(i) == 'b' ) {
                  countB++ ; 
            }
            else 
                  countC++ ; 
      }

      if( sorted && (countA == countC || countB == countC )) {
            cout << "YES" << endl ;
      }
      else {
            cout << "NO" << endl ;
      }


}