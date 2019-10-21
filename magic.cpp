#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int mat[4][4] ; 
      for( int i = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  cin >> mat[i][j] ; 
            }
      }

      int matrix_shud_be[4][4] ;  
      int n = 3 ;
      for( int i = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  matrix_shud_be[i][j] = n*((i + j -1 + n/2)%n) + ((i+2*j-2)%n) + 1 ;
            }
      }

      int cost = 0 ;
      for( int i = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  cost += abs( mat[i][j] - matrix_shud_be[i][j] ) ; 
            }
      }

      for( int i = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  cout << mat[i][j] << " " ;
            }
            cout << endl ;
      }
      cout << endl ;

      for( int i = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  cout << matrix_shud_be[i][j] << " " ;
            }
            cout << endl ;
      }

      // cout << cost << endl ;

}