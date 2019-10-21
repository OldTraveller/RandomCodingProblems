#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ;
      cin >> n ; 

      ll arr[n+1] ;
      for( int i = 1 ; i <= n ; i++ ) {
            cin >> arr[i] ; 
      }

      sort( arr + 1 , arr + n + 1 ) ;

      ll prefix_sum[n+1] ;
      prefix_sum[1] = arr[1] ;

      for( int i = 2 ; i <= n ; i++ ) {
            prefix_sum[i] = arr[i] + prefix_sum[i-1] ;
      }

      ll answer = 0 ; 
      for( ll i = 1 ; i <= n ; i++ ) {
            answer += ( i*arr[i] - prefix_sum[i] ) ; 
      }

      cout << answer << endl ;
}