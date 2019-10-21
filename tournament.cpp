#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ; 
      cin >> n ; 

      ll arr[n] ; 
      
      for( ll i = 0 ; i < n ; i++ ) {
            cin >> arr[i] ; 
      }

      ll sum = 0 ; 

      int count = 0 ;
      for( ll i = 0 ; i < n ; i++ ) {
            for( int j = i+1 ; j < n ; j++ ) {
                  sum += abs( arr[i] - arr[j] ) , count++ ;            
            }
      }

      cout << sum << endl ;
      cout << "count is : " << count << endl ;
}