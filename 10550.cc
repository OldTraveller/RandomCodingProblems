#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int a , b , c , d ; 
       while ( scanf("%d %d %d %d" , &a , &b , &c , &d ) , ( a||b||c||d ) ) {
              int sum = 0 ; 
              if ( a != b ) sum += ( b < a ) ? ( b - a ) : ( 40 - b + a ) ; 
              if ( c != b ) sum += ( c > b ) ? ( b - c ) : ( 40 - b + c ) ;
              if ( d != c ) sum += ( d < c ) ? ( d - c ) : ( 40 - d + c ) ; 
              cout << sum * 9 + 1080 << endl; 
       }
}