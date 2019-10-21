#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

bool IS_IDENTICAL( ll initial[] , ll required[] , ll size ) {
      for( ll i = 0 ; i < size ; i++ ) {
            if( initial[i] != required[i] ) {
                  return false ;
            }
      }
      return true ; 
}

void SET_POSITION( ll initial[] , ll required[] , bool position[] , ll size ) {
      for( ll i = 0 ; i < size ; i++ ) {
            if( initial[i] == required[i] ) {
                  position[i] = true ;
            }
      }
}

void UPDATE_HEIGHT( ll initial[] , ll left , ll right , ll to_height ) {
      for( ll i = left ; i < right ; i++ ) {
            initial[i] = to_height ; 
      }
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ;
      cin >> t ;
      bool can_be_done = true ; 
      
      while( t-- ) {
            ll n ; 
            cin >> n ; 

            ll initial[n+1] ;
            ll required[n+1] ;
            ll answer = 0 ;  

            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> initial[i] ;
            }

            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> required[i] ; 
                  if( required[i] > initial[i] ) {
                        can_be_done = false ; 
                        break ;
                  }
            }

            if( !can_be_done ) {
                  cout << -1 << endl ;
                  continue ;
            }            
            else {
                  if( IS_IDENTICAL( initial , required , n ) ) {
                        cout << 0 << endl ; 
                        continue ; 
                  }
                  else {

                        bool position[n+1] ; 
                        memset( position , false , sizeof( position ) ) ; 
                        position[n] = true ; 
                        SET_POSITION( initial , required , position , n ) ; 

                        while( !IS_IDENTICAL( initial , required , n ) ) {
                              ll left ;
                              for( left = 0 ; left < n ; left++ ) {
                                    if( position[left] == false ) 
                                          break;
                              }
                              ll right ; 
                              for( right = left ; right <= n ; right++ ) {
                                    if( position[right] == true ) 
                                          break ;
                              }
                              if( ( right == n || right == n-1 ) && ( left == n - 1 ) && position[left] ) {
                                    break ;
                              }
                              if( right == n && left == n - 1 ) {
                                    answer++ ; 
                                    break ;
                              }
                              ll cut_height = 1 ;
                              for( ll i = left ; i < right ; i++ ) {
                                    cut_height = max( cut_height , required[i] ) ;
                              }
                              UPDATE_HEIGHT( initial , left , right , cut_height ) ; 
                              SET_POSITION( initial , required , position , n ) ;
                              answer++ ; 
                        }
                        cout << answer << endl ;
                  }
            }
      }
} 