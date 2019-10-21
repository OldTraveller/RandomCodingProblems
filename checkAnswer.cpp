#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

bool conditon( string top , string bottom ) {
       int count = 0 ; 
       for ( int i = 0 ; i < 3 ; i++ ) {
              if ( top[i] == 'b' || bottom[i] == 'b' ) count++ ; 
       }

       if ( count == 1 ) return false ; 
       if ( count == 3 ) {
              for ( int i = 0 ; i < 3 ; i++ ) {
                     if ( top[i] == 'o' or bottom[i] == 'o' ) return true ; 
              } return false ; 
       } 
       for ( int i = 0 ; i < 3 ; i++ ) {
              if ( top[i] == 'b' or bottom[i] == 'b' ) continue ; 
              if ( top[i] == 'o' or bottom[i] == 'o' ) return true ; 
       } return false ; 
}

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ; cin >> t ;
       while ( t-- ) {
              string top ; string bottom ; 
              cin >> top >> bottom ; 
              if ( conditon( top , bottom ) ) cout << "yes" << endl ; 
              else cout << "no" << endl ;
       }
       
}
