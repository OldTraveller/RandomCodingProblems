#include <bits/stdc++.h>
using namespace std ;

int knapSack( int W , int w[] , int val[] , int n ) {
       int K[n+1][W+1] ; 
       for( int i = 0 ; i <= n ; i++ ) {
              for( int j = 0 ; j <= W ; j++ ) {
                     if( i == 0 or j == 0 ) K[i][j] = 0 ; 
                     else if( w[i-1] <= j ) K[i][j] = max( val[i-1] + K[i-1][j-w[i-1]] , K[i-1][j] ) ; 
                     else K[i][j] = K[i-1][j] ; 
              }
       }
       return K[n][W] ; 
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}