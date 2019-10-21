#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t ;

      while(t--) {
            int n ;
            cin >> n ;

            int arr[n+1] ;

            int count = 0 ;
            for( int i = 1 ; i <= n ; i++ ){
                  cin >> arr[i] ;       
            }

            vector<int> vec ; 
            for( int i = 1 ; i <= n ; i++ ) {
                  ll value = 0 ; 

                  if( arr[i] == 0 ) {
                        vec.insert(vec.begin() , i ) ;
                  }

                  else {
                  for( int j = 0 ; j < vec.size() ; j++ ) {
                        if( vec.at(j) == arr[i] ) {
                              value = j ;
                              break ;
                        }
                  }
                        vec.insert(vec.begin() + value + 1 , i ) ;
                  }
                  
                  for( int j = 0 ; j < vec.size()  ; j++ ) {
                        if( vec.at(j) == i ) {
                              value = j ; 
                        }
                  }
                  
                  count += min( value , (int)vec.size() - value - 1 ) ;
            }
            cout << count << endl ;
      }
}