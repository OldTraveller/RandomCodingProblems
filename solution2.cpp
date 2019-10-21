#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

void Solve( vector< pair<double,double> > &arr ) {
       double dp[arr.size()+1][arr.size()+1] ;

       for( int i = 0 ; i <= arr.size() ; i++ ) {
              for( int j = 0 ; j <= arr.size() ; j++ ) {
                     dp[i][j] = -LONG_LONG_MAX ;
              }
       }
       for( int i = 0 ; i < arr.size() ; i++ ) {
              for( int j = 0 ; j < arr.size() ; j++ ) {
                     if( arr[i].second == arr[j].second ) continue ;
                     else 
                            dp[i][j] = abs( arr[i].first - arr[j].first )/( abs( arr[i].second - arr[j].second ) ) ;
              }
       }

       double MAX = -LONG_LONG_MAX ;
       for( int i = 0 ; i < arr.size() ; i++ ) {
              for( int j = 0 ; j < arr.size() ; j++ ) {
                     MAX = max( MAX  , dp[i][j] ) ;
              }
       }
       cout << MAX << endl ;
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

              vector< pair<double,double> > arr ; 

              for( int i = 0 ; i < n ; i++ ) {
                     double pos , vel ; 
                     cin >> pos >> vel ; 
                     arr.push_back( make_pair(pos,vel) ) ;
              }

              sort( arr.begin() , arr.end() ) ; 

              vector<double> vel ; 
              for( int i = 0 ; i < n ; i++  ){
                     vel.push_back(arr.at(i).second ) ;
              }

              if( is_sorted(vel.begin() , vel.end() ) ) {
                     cout << -1 << endl ;
                     continue ; 
              } else {
                     reverse(vel.begin() , vel.end() ) ;
                     if(is_sorted(vel.begin() , vel.end() ) ) {
                            cout << -1 << endl ; 
                            continue ; 
                     }
              }

              int i ;
              for( i = 0 ; i < n-1 ; i++ ) {
                     if( arr.at(i).second > arr.at(i+1).second )
                            continue ;
                     break ; 
              } if( i == n-1 ) {
                     cout << -1 << endl ;
                     continue ;
              }
              for( i ; i < n - 1 ; i++ ) {
                     if( arr.at(i).second < arr.at(i+1).second ) 
                            continue ;
                     break ;
              } if( i == n - 1 ) {
                     cout << -1 << endl ;
                     continue ;
              }

              Solve(arr) ; 
       }
}