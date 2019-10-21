#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ;
      
      int arr[n] ; 
      for( int i = 0 ; i < n ; i++ ) {
            cin >> arr[i] ;
      }

      int distance = INT_MAX ; 
      for( int i = 0 ; i < n ; i++ ) {
            for( int j = i + 1 ; ( i != j )&&( j < n-1 ) ; j++ ) {
                  if( arr[i] == arr[j] ) {
                        distance = min( distance , (int)abs( i - j ) ) ;
                  }
            }
      }

      if( distance == INT_MAX ) 
            cout << -1 << endl ;
      else 
            cout << distance << endl ;
                 
}