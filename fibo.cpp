#include <bits/stdc++.h>
#define MOD 100007
using namespace std ;
using ll = long long ;

ll fib[10001] = {0,1} ;

void fibo( int n ) {
      for( int i = 2 ; i < n ; i++ ) {
            fib[i] = fib[i-1] + fib[i-2] ; 
      }
}

int main() {
      int n ; 
      cin >> n ;

      fibo(n) ;   
      for( int i = 0 ; i < n ; i++ ) {
            cout << fib[i]%MOD << " " ; 
      }
}