#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int length( int arr[] , int n ) {
       int dp[n] ; 

       for( int i = 0 ; i < n ; i++ ) {
              dp[i] = 1 ; 
       }

       for( int i = 1 ; i < n ; i++ ) {
              for( int j = 0 ; j < i ; j++ ) {
                     if( arr[i] > arr[j] && dp[i] < dp[j] + 1 ) {
                            dp[i] = dp[j] + 1 ;
                     }
              }
       }
       return *max_element( dp , dp + n ) ; 
}

int main() {
       int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
       int n = sizeof(arr)/sizeof(arr[0]);
       cout << "LENGTH : " << length( arr , n ) ;
}