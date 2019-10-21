#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ;
      cin >> n ; 

      ll kangaroos[n] ; 
      
      for( ll i = 0 ; i < n ; i++ ) {
            cin >> kangaroos[i] ; 
      }

      sort( kangaroos , kangaroos + n ) ; 

      ll maximum = kangaroos[n-1] ; 
      ll i ; 
      for( i = n-2 ; i >= 0 ; i-- ) {
            if( kangaroos[i]*2 > maximum ) {
                  continue ;
            }
            break ; 
      }

      ll can_go_in = i + 1 ;
      ll cannot_go_in = n - can_go_in ;

      vector<ll> chote ;
      vector<ll> bade ; 

      for( ll i = 0 ; i < can_go_in ; i++ ) {
            chote.push_back(kangaroos[i]) ; 
      }
      
      for( ll i = 0 ; i < cannot_go_in ; i++ ) {
            bade.push_back(kangaroos[cannot_go_in + i]) ; 
      }

      bool chota_zyada_hai = false ;
      bool bada_zyada_hai = false ;
      
      ll kaun_zyada_hai = max( chote.size() , bade.size() )  ;
      ll other_one = chote.size() + bade.size() - kaun_zyada_hai ; 

      if( kaun_zyada_hai == chote.size() ) {
            chota_zyada_hai = true ;
      }      
      else {
            bada_zyada_hai = true ; 
      }

      ll one = 0 ; 
      ll two = 0 ; 
      ll count = 0 ; 

      if( bada_zyada_hai ) {
            ll k = 0 ; 
            while( one < cannot_go_in && k < can_go_in ) {
                  if( 2*chote[k] < bade[one++] ) {
                        continue ; 
                  }
                  else {
                        count++ ; 
                  }
            }
      }
      else {
            ll k = 0 ; 
            while( two < can_go_in && k < cannot_go_in ) {
                  if( bade[k++] < 2*chote[two] ) {
                        continue ; 
                  }
                  else {
                        count++ ; 
                  }
            }
      }

      cout << n - count << endl ;
      

}