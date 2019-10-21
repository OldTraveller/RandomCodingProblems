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

            double number = n*(n-1)/2 ; 
            sort( arr , arr + n ) ;
            ll max_sum = arr[n-1] + arr[n-2] ;
            int count = 0 ; 

            for( int i = 0 ; i < n - 1 ; i++ ) {
                  for( int j = i+1 ; j < n ; j++ ) {
                        if( arr[i] + arr[j] == max_sum ) {
                              count++ ; 
                        }
                  }
            }     

            cout << count/number << endl ;            

      }
}