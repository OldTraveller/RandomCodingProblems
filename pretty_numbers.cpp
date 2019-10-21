#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

/* AUTHOR : Rai */ 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ; cin >> t ;   
       while( t-- ) {
              int n , k ; 
              cin >> n >> k ;

              string s ; cin >> s ; 
              int l = s.length() ; 
              int arr[l] ;
              memset( arr , 0 , sizeof arr ) ;  
              arr[0] = 0 ; 
              for( int i = 1 ; i < l ; i++ ) {
                     if( arr[i] != arr[i-1] ) arr[i] = 1 ; 
              }
              int counts[l] ;
              memset( counts , 0 , sizeof counts ) ; 
              int m = arr[0] ; 
              for( int i = 1 ; i < l ; i++ ) {
                     if( (k-1)%i == 0 ) m = 0 ; 
                     
              }
       }
}