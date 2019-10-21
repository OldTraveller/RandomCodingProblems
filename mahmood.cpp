#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int min( int a , int b ) {
      return ( a > b ) ? b : a ;
}

// leave this !

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n , k , m ;
      cin >> n >> k >> m ;

      string words[n+1] ;
      for( int i = 1 ; i <= n ; i++ ) {
            cin >> words[i] ;
      }

      ll cost[n+1] ;    
      for( int i = 1 ; i <= n ; i++ ) {
            cin >> cost[i] ; 
      }

      int minimum_cost[n+1] ; 

      // while( k-- ) {
      //       int number ; 
      //       cin >> number ; 

      //       int minimum_cost = INT_MAX ;
      //       for( int i = 0 ; i < number ; i++ ) {
      //             int ele ; 
      //             cin >> ele ; 
      //             minimum_cost[ele] = min( minimum_cost[ele] , cost[i] ) ;           
      
}
