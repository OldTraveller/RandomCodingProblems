#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ; cin >> t ; 
       while ( t-- ) {
              int n , k ; 
              cin >> n >> k ;
              vector <int> counts( n + 1 , 1 ) ;
              for ( int i = 2 ; i <= k ; i++ ) {
                     int sum = i ; 
                     while ( sum <= n ) {
                            counts[sum]++ ; 
                            sum = sum + i ; 
                     }
              }

              int filled = 0 ;
              for ( int i = 1 ; i <= counts.size() - 1 ; i++ ) {
                     if ( counts.at(i) & 1 ) filled++ ; 
              }
              cout << filled << " " << n - filled << endl ;
       }       
}