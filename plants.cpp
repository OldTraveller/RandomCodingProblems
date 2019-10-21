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

ll can_be_cut( ll initial[] , ll required[] , ll size , ll pos , ll to_height ) {
      if( pos == size - 1 ) {
            if( initial[pos] >= to_height ) {
                  return 1 ;
            }
      }
      else if( initial[pos] >= to_height && initial[pos] != required[pos] ) {
            return 1 + can_be_cut( initial , required , size , pos + 1 , to_height ) ;
      }
      else {
            return 0 ;
      }
}

void UPDATE( ll initial[] , ll can_be_cut , ll pos , ll to_height ) {
      for( ll i = pos ; i < pos + can_be_cut ; i++ ) {
            initial[i] = to_height ;
      }
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t ;

      while( t-- ) {
            ll n ;
            cin >> n ;

            ll initial[n] ; 
            ll required[n] ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> initial[i] ;
            }

            set<ll> what_height_to_cut  ;
            bool can_be_made = true ;
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> required[i] ; 
                  what_height_to_cut.insert(required[i]) ;
                  if( required[i] > initial[i] ) {
                        can_be_made = false ;
                        break ;
                  }
            }

            if( !can_be_made ) {
                  cout << -1 << endl ;
                  continue ;
            }
            else {
                  if( IS_IDENTICAL( initial , required , n ) ) {
                        cout << 0 << endl ;
                        continue ;
                  }
                  
                  ll count = 0 ; 
                  while( !IS_IDENTICAL( initial , required , n ) ) {
                        
                  }
            }
      }
}