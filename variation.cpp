#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      vector<ll> vec ;

      ll n , k ;  
      cin >> n >> k ;

      for( ll i = 0 ; i < n ; i++ ) {
            ll ele ;
            cin >> ele ; 
            vec.push_back(ele) ; 
      }
      
      unique( vec.begin() , vec.end() ) ; 
      sort( vec.begin() , vec.end() ) ; 

      ll count = 0 ; 
      
      for( ll i = 0 ; i < vec.size() ; i++ ) {
            for( ll j = i + 1 ; j < vec.size() ; j++ ) {
                  if( abs( vec.at(i) - vec.at(j) ) >= k ) {
                        count++ ; 
                  } 
            }
      }

      cout << count << endl ;
}