#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

bool myfunction( ll i , ll temp_max ) {
      return i%temp_max ;
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ;
      cin >> t ;

      while( t-- ) {
                  ll n ;
                  cin >> n ; 

                  ll arr[n+1] ; 

                  ll maximum = LLONG_MIN ; 

                  for(  ll i = 1 ; i <= n ; i++ ) {
                        cin >> arr[i] ; 
                        maximum = max( arr[i] , maximum ) ; 
                  }

                  ll prefix_sum[n+1] ;
                  prefix_sum[0] = 0 ;
                  prefix_sum[1] = arr[1] ; 
                  for( ll i = 2 ; i <= n ; i++ ) {
                        prefix_sum[i] = arr[i] + prefix_sum[i-1] ;
                  }

                  string answer = "" ; 
                  for( ll i = 1 ; i <= n ; i++ ) {
                        
                        ll temp_max = maximum ; 
                        ll value1 = 0 ; 
                        for( int k = i ; k <= n/i ; k+=i ) {
                              ll value2 = prefix_sum[k] - value1 ;
                              if( temp_max < value2 - value1 ) {
                                    temp_max = value2 ;
                              }
                              value1 = value2 ; 
                        }

                        cout << "MAXIMUM : " << temp_max << endl ; 
                        
                        ll count = 0 ;
                        for( ll j = 1 ; j <= n && count<=i ; j++ ) {
                              if( prefix_sum[j]%temp_max == 0 ) {
                                    count++ ;
                              }
                        }

                        if( count == i ) {
                              answer += "1" ;
                        }

                        else {
                              answer += "0" ;
                        }
                  }
                  cout << answer << endl ;
      }
}