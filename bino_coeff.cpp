#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int bino( int n , int k ) {
      int C[n+1][k+1] ; 

      for( int i = 0 ; i <= n ; i++ ) 
            for( int j = 0 ; j <= min(i,j) ; j++ ) 
                  if( j == 0 || j == i ) 
                        C[i][j] = 1 ; 
                  else 
                        C[i][j] = C[i-1][j-1] + C[i-1][j] ; 
      
      return C[n][k] ; 
}

int main() {
      cout << "ENTER THE VALUE OF N AND K " << endl ;
      int n ; 
      int k ;
      cin >> n >> k ;
      cout << "BINOMIAL COEFF IS : " << bino( n , k ) << endl ;
}