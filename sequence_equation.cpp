#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ; 

      int arr[n+1] ; 
      for( int i = 1 ; i <= n ; i++ ) {
            cin >> arr[i] ;
      }

      for( int i = 1 ; i <= n ; i++ ) {
            int j ;
            for( j = 1 ; j <= n ; j++ ) {
                  if( arr[j] == i ) {
                        break ; 
                  }
            }

            int k ;
            for( k = 1 ; k <= n ; k++ ){
                  if( arr[k] == j ) {
                        break ; 
                  }
            }

            cout << k << endl ;
      }


}