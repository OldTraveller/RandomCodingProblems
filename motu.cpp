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
            ll n , k ; 
            cin >> n >> k ; 

            vector<ll> odd_place ;
            vector<ll> even_place ; 

            for( ll i = 1 ; i <= n ; i++ ) {
                  ll ele ; 
                  cin >> ele ; 
                  if(i&1) odd_place.push_back(ele) ; 
                  else even_place.push_back(ele) ;
            }     

            if( n == 1 ) {
                  cout << "NO" << endl ; 
                  continue ;
            }

            if( n == 2 ) {
                  if( even_place[0] > odd_place[0] ) {
                        cout << "YES" << endl ;
                        continue ;
                  } else {
                        if( even_place[0] == odd_place[0] ) {
                              cout << "NO" << endl ;
                              continue ; 
                        }
                        if( k > 0 ) {
                              cout << "YES" << endl ;
                              continue ;
                        } 
                  }
            }

            ll sum_odd = 0 ;
            ll sum_even = 0 ;
            for( auto it : odd_place ) {
                  sum_odd += it ; 
            }
            
            for( auto it : even_place ) {
                  sum_even += it ;
            }

            if( sum_even > sum_odd ) {
                  cout << "YES" << endl ; 
                  continue ; 
            }

            bool hua = false ;
            bool khatam = false ;
            while( k-- && odd_place.size() && even_place.size() ) {
                  auto maxi = max_element(odd_place.begin() , odd_place.end()) ;
                  auto mini = min_element( even_place.begin() , even_place.end() ) ;
                  ll Mvalue = *maxi ; 
                  ll mvalue = *mini ; 
                  odd_place.erase(maxi) ; 
                  even_place.erase(mini) ;
                  if( mvalue < Mvalue ) {
                        sum_odd = sum_odd - Mvalue + mvalue ; 
                        sum_even = sum_even - mvalue + Mvalue ; 
                  } else {
                        khatam = true ;
                  }
                  if( sum_even > sum_odd ) {
                        hua = true ; 
                        break ;
                  }
                  if( khatam ) {
                        break ;
                  }
            }
            if( hua ) {
                  cout << "YES" << endl ;
            } else {
                  cout << "NO" << endl ;
            }
      }
}