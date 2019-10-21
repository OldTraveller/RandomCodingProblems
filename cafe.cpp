#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ; 
      cin >> n ; 
      vector< pair<ll,ll> > vec ;
      set< pair<ll,ll> > s ; 

      for( ll i = 0 ; i < n ; i++ ) {
            ll hours , minutes ; 
            cin >> hours >> minutes ;
            pair<ll,ll> p = make_pair(hours,minutes) ; 
            vec.push_back(p) ; 
            s.insert(p) ; 
      }
      
      ll k = 0 ; 
      ll count_individual[s.size()] ;
      memset( count_individual , 0 , sizeof(count_individual) ) ;
      
      for( set< pair<ll,ll> > :: iterator it = s.begin() ; it != s.end() ; it++ ) {
            for( vector< pair<ll,ll> > :: iterator vec_it = vec.begin() ; vec_it != vec.end() ; vec_it++ ) {
                  if( vec_it -> first == it -> first && vec_it -> second == it -> second ) {
                        count_individual[k]++ ;
                  } 
            }
            k++ ;      
      }

      cout << *max_element( count_individual , count_individual + s.size() ) << endl ;
}     