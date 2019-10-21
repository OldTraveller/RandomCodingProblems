#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int min( int a , int b ) {
      return (a>b) ? a : b ; 
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ; 
      cin >> t ; 

      while( t-- ) {
            int n ; 
            cin >> n ; 
            
            int count = 0 ;
            vector<int> vec ;
            for( int i = 1 ; i <= n ; i++ ) {
                  int ele ; 
                  cin >> ele ;

                  
                  if( ele == 0 ) {
                        vec.insert( vec.begin() , i) ; 
                        continue ;
                  }     
                  else {
                        int k ;
                        for( k = 0 ; k < vec.size() ; k++ ) {
                              if( vec[k] == ele ) {
                                    break ; 
                              }
                              vec.insert( vec.begin() + k + 1 , i ) ;
                              count += min( k+1 , vec.size()-k-1 ) ;
                        }
                  }
            }
            cout << count << endl ;
      }
}