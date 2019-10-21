#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int rod_cut( int price[] , int n ) {
       int dp[n+1] ; 

       dp[0] = 0 ; 

       for( int i = 1 ; i <= n ; i++ ) {
              int Q = INT_MIN ; 
              for( int j = 0 ; j < i ; j++ ) {
                     Q = max( Q , price[j] + dp[i-j-1] ) ;
              }
              dp[i] = Q ; 
       }
       return dp[n] ;
}

int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d", rod_cut(arr, size));
    return 0;
}