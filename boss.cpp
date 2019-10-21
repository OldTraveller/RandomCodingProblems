#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t ;

      while( t-- ) {
            int n ;
            cin >> n ; 

            int arr[n] ; 
            for( int i = 0 ; i < n ; i++ ) {
                  cin >> arr[i] ; 
            }

            if( is_sorted( arr , arr + n ) ) {
                  cout << "YES" << endl ;
                  continue ;
            }

            int i ; 
            for( i = 1 ; i < n ; i++ ) {
                  if( arr[i] < arr[i-1] ) {
                        break ;
                  }
            }

            if( i == n-1 ) {
                  cout << "YES" << endl ;
                  continue ;
            }
            if( i == n-2 ) {
                  arr[i] = arr[i+1] ;
            }          
            if( i != n-1 ){
                  arr[i-1] = min( arr[i-1], min(arr[i] , arr[i+1] )) ;
            }
            

            if( is_sorted( arr , arr + n ) ) {
                  cout << "YES" << endl ;
            }
            else {
                  cout << "NO" << endl ;
            }
                  

      }
}