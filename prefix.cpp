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
            string name ;
            cin >> name ;

            ll n ; 
            cin >> n ;

            ll countA = 0 ; 
            ll countB = 0 ;
            ll number_of_times = 0 ;  
            vector< pair<ll,ll> > p ; 
            bool AgB = false ;

            for( int i = 0 ; i < name.length() ; i++ ) {
                  if( name.at(i) == 'a' ) {
                        p.push_back( pair<ll,ll>( ++countA , countB ) ) ;
                  }
                  else {
                        p.push_back( pair<ll,ll>( countA , ++countB ) ) ;
                  }

                  if( countA > countB ) {
                        number_of_times++ ; 
                  }
            }

            if( countA == countB ) {
                  number_of_times *= n ; 
            }

            else if( countA > countB ) {
                  set<ll> positions ; 

                  for( ll i = 0 ; i < p.size() ; i++ ) {
                        if( p[i].first <= p[i].second ) {
                              positions.insert(i) ;
                        }
                  }

                  while( positions.size() ) {
                        for( ll i = 0 ; i < p.size() ; i++ ) {
                              p[i].first += countA ; 
                              p[i].second += countB ;

                              if( p[i].first > p[i].second ) {
                                    number_of_times++ ; 
                              }
                        }

                        for( set<ll> :: iterator it = positions.begin() ; it != positions.end() ; it++ ) {
                              if( p[*it].first > p[*it].second ) {
                                    positions.erase(*it) ;
                              }
                        }
                        --n ;
                  }
                  AgB = true ;
            }

            else {
                  set<ll> positions ; 
                  for( ll i = 0 ; i < p.size() ; i++ ) {
                        if( p[i].first > p[i].second ) {
                              positions.insert(i) ;
                        }
                  }

                  while( positions.size() ) {
                        for( ll i = 0 ; i < p.size() ; i++ ) {
                              p[i].first += countA ;
                              p[i].first += countB ; 

                              if( p[i].first > p[i].second ) {
                                    number_of_times++ ;
                              }
                        }

                        for( set<ll> :: iterator it = positions.begin() ; it != positions.end() ; it++ ) {
                              if( p[*it].first <= p[*it].second ) {
                                    positions.erase(*it) ;
                              }
                        }
                  }
            }

            if( AgB ) {
                  number_of_times += (n-1)*name.length() ;
            }

            cout << number_of_times << endl ;
      }
}