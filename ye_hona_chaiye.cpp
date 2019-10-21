#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

// GOT AC FOR 0.29 seconds
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

                  for(  ll i = 1 ; i <= n ; i++ ) {
                        cin >> arr[i] ; 
                  }     

                  ll prefix_sum[n+1] ;
                  prefix_sum[0] = 0 ;
                  prefix_sum[1] = arr[1] ; 
                  for( ll i = 2 ; i <= n ; i++ ) {
                        prefix_sum[i] = arr[i] + prefix_sum[i-1] ;
                  }

                  ll sum = prefix_sum[n] ; 
                  string answer = "1" ; 

                  for( ll i = 2 ; i <= n ; i++ ) {
                        ll each_part = sum/i ; 
                        ll factor = each_part ; 
                        bool hai_ya_nahi = true ;
                        
                        if( sum%i != 0 ) {
                              hai_ya_nahi = false ; 
                        }
                        
                        else {
                              while( each_part <= sum ) {
                                    if( !binary_search( prefix_sum , prefix_sum + n + 1 , each_part )) {
                                          hai_ya_nahi = false ; 
                                          break ; 
                                    }
                                    else {
                                          each_part += factor ; 
                                          continue ; 
                                    }
                              }
                        }
                        
                        if( hai_ya_nahi ) {
                              answer += "1" ; 
                        }
                        else {
                              answer += "0" ; 
                        }
                  }
                  cout << answer << endl ;
      }
}