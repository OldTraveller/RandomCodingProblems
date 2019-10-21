#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

bool isPerfectSquare( int n ) {
       int s = sqrt(n) ; 
       return ( s*s == n ) ;
}

bool isFibonnaci( int n ) {
       return ( isPerfectSquare(5*n*n - 4) or isPerfectSquare(5*n*n + 4) ); 
}

int main() {
       while(1) {
              cout << "Enter the number : " ;
              int n ;
              cin >> n ;
              if( isFibonnaci(n) ){
                     cout << "YES " << n << " IS FIBONACCI ! " << endl ;
              } else {
                     cout << "NOT FIBONACCI ! " << endl ;
              }
       }
}