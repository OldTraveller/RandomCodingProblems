#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int Coin_Exchange( int coins[] , int m , int n ) {
      int dp[n+1] ;

      memset( dp , 0 , sizeof(dp) ) ; 
      dp[0] = 1 ; // BASE CASE WHEN NOTHING IS THERE !
      
      for( int i = 0 ; i < m ; i++ ) {
            for( int j = coins[i] ; j <= n ; j++ ) {
                  dp[j] += dp[ j - coins[i] ] ; 
            }
      }
      return dp[n] ;
}

int main() {
      int currency[] = { 1,2,5 } ; 
      int n = 10 ; 
      int m = 3 ; 

      cout << "NUMBER OF WAYS TO MAKE A 10 FROM 2,3,5 IS : " << Coin_Exchange( currency , m , n ) << endl; 
      return 0 ;
}