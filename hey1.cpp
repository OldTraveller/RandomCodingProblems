#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ;
      cin >> n ; 

      ll sum = 0 ; 
      ll arr[n+1] ; 
      memset( arr , 0 , sizeof(arr) ) ;

      for( ll i = 1 ; i <= n ; i++ ) {
            cin >> arr[i] ; 
            sum += arr[i] ;
      }
      
      ll temp_sum = 0 ; 
      ll i ;
      for( i = 1 ; i <= n ; i++ ) {
            temp_sum += arr[i] ; 
            if( temp_sum >= ceil(sum/2) ) {
                  break ;
            }
      }

      cout << i << endl ;
}