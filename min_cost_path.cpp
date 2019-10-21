#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

const int n = 3 ;
const int m = 3 ;

void Min_Cost( int arr[][n] , int m , int n ) {
      
      int dp[m+1][n+1] ; 

      dp[0][0] = arr[0][0] ;
      
      for( int i = 1 ; i < n ; i++ ) {
            dp[0][i] = dp[0][i-1] + arr[0][i] ;  
      }

      for( int i = 1 ; i < m ; i++ ) {
            dp[i][0] = dp[i-1][0] + arr[i][0] ;  
      }

      for( int i = 1 ; i < m ; i++ ) {
            for( int j = 1 ; j < n ; j++ ) {
                  dp[i][j] = arr[i][j] + min( dp[i-1][j-1] , min( dp[i-1][j] , dp[i][j-1] ) ) ; 
            }
      }

      for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                  cout << dp[i][j] << " " ;
            }
            cout << endl ;
      }

      cout << "MINIMUM DISTANCE IS : " << dp[m-1][n-1] << endl ;     
}

int main() {
      int arr[m][n] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };

      Min_Cost( arr , m , n ) ;
}