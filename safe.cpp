#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      string name ;
      cin >> name ; 

      if( name.length() == 1 ) {
            if( isdigit(name.at(0))){
                  cout << 1 << endl ;
                  return 0 ;
            }
            cout << 9 << endl ;
            return 0 ;  
      }
      
      unordered_map<char,int> cnt ; 
      for( int i = 0 ; i < name.length() ; i++ ) {
            cnt[name.at(i)]++ ; 
      }

      ll multi = 1 ; 
      ll choice = 10 ;
      for( unordered_map<char,int> :: iterator it = cnt.begin() ; it != cnt.end() ; it++ ) {
            if( it->first == '?') {
                  multi *= pow(10,it -> second) ;
            } else if ( it -> first >= 'A' && it->first <= 'K' ) {
                  multi *= (choice--) ;
            }
      }
      
      if( !isdigit(name.at(0)) ) {
            multi/=10 ;
            multi*=9 ;
      }

      cout << multi << endl ;
}