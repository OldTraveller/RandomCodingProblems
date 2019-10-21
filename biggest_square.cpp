#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

/* NICE DP PROBLEM ! */

const int n = 5 ; 
const int m = 6 ;

int min( int a , int b , int c ) {
      return min( a , min( b , c ) ) ; 
}

void solve( int M[][n] ) {
      
      int answer[m+1][n+1] ; 
      int max_i = 0 ; 
      int max_j = 0 ;   

      for( int i = 0 ; i < n ; i++ ) {
            answer[0][i] = M[0][i] ; 
      }

      for( int i = 1 ; i < m ; i++ ) {
            answer[i][0] = M[i][0] ; 
      }

      for( int i = 1 ; i < m ; i++ ) {
            for( int j = 1 ; j < n ; j++ ) {
                  if( M[i][j] == 1 ) {
                        answer[i][j] = min( answer[i-1][j-1] , answer[i-1][j] , answer[i][j-1] ) + 1 ; 
                  }
                  else 
                        answer[i][j] = 0 ; 
            }
      }

      int maximum = M[0][0] ;
      for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                  if( maximum < answer[i][j] ) {
                        maximum = answer[i][j] ;
                        max_i = i ;
                        max_j = j ;
                  }
            }
      }

      cout << "THE COMPLETE MATRIX IS : " << endl ;
      for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                  cout << answer[i][j] << " " ;
            }
            cout << '\n' ;
      }

      cout << endl ; 
      cout << "THE BIGGEST SQUARE IS : " << endl ; 
      for( int i = max_i ; i > max_i - maximum ; i-- ) {
            for( int j = max_j ; j > max_j - maximum ; j-- ) {
                  cout << M[i][j] << " " ;
            }
            cout << '\n' ; 
      }
}

int main() {
      int matrix[m][n] = {
                              {0, 1, 1, 0, 1}, 
                              {1, 1, 0, 1, 0}, 
                              {0, 1, 1, 1, 0},
                              {1, 1, 1, 1, 0},
                              {1, 1, 1, 1, 1},
                              {0, 0, 0, 0, 0}
                         };
      solve( matrix ) ;
}