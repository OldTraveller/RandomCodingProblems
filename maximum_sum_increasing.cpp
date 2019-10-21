#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int MaximumSum( int arr[] , int n ) {
       int dp[n] ; 
       copy( arr , arr + n  , dp ) ; 

       for( int i = 1  ; i < n ; i++ ) {
              for ( int j = 0 ; j < i ; j++ ) {
                     if( arr[i] > arr[j] && dp[i] < dp[j] + arr[i] ) {
                            dp[i] = dp[j] + arr[i] ; 
                     }
              }
       }

       return *max_element( dp , dp +  n ) ; 
}

int main() {
       int arr[] = {1, 101, 2, 3, 50, 4, 5};
       cout << MaximumSum( arr , sizeof(arr)/sizeof(int) ) << endl ;
}