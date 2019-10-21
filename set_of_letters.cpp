#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      set<char> s ; 
      char str[1005] ; 
      cin.getline( str ,1005 )  ;

      int i = 1 ; 
      while( str[i] != '}' ) {
            s.insert(str[i++] ) ;
      }

      s.erase(' ') ; 
      s.erase(',') ;
      cout << s.size() << endl ;

}