#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n , k1 , k2 ; 
      cin >> n >> k1 >> k2 ; 

      int arr1[n] ;
      int arr2[n] ; 

      for( int i = 0 ; i < n ; i++ ) {
            cin >> arr1[i] ; 
      }

      for( int i = 0 ; i < n ; i++ ) {
            cin >> arr2[i] ; 
      }

      int diff[n] ; 
      for( int i = 0 ; i < n ; i++ ) {
            diff[i] = max(arr1[i],arr2[i]) - min( arr1[i] , arr2[i] )  ;
      }

      int number = k1 + k2 ; 
      sort( diff , diff + n ) ; 

      while( number-- ) {
            if( *max_element( diff , diff + n ) == 0 ) {
                  break ; 
            }
            sort( diff , diff + n ) ;
            if( diff[n-1] > 0 ) {
                  diff[n-1] -= 1 ;
            }
            else if( diff[n-1] < 0 ) {
                  diff[n-1] += 1 ; 
            }
      }

      int i = 0 ; 
      if( number ) {
            while( number-- ) {
                  if( number < n ) 
                        diff[i++] += 1 ; 
                  else {
                        diff[i++] += ( number/n ) ; 
                  }
            }
      }

      int sum = 0 ;
      for( int i = 0 ; i < n ; i++ ) {
            sum += diff[i]*diff[i] ; 
      }

      cout << sum << endl ;
}