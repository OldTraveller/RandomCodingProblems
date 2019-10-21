#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ;
      cin >> t ;

      while( t-- ) {
            ll n , k ; 
            cin >> n >> k ; 

            ll count = 0 ; 
            ll sum = 0 ; 
            ll arr[n] ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> arr[i] ;
                  sum += arr[i] ; 
            }

            for( ll i = 0 ; i < n ; i++ ) {
                  ll temp_sum = sum ; 
                  temp_sum -= arr[i] ; 
                  ll temp = arr[i] ; 
                  temp += k ; 
                  if( temp > temp_sum ) 
                        count++ ; 
            }
            
            cout << count << endl ;
      }
}