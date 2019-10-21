#include <bits/stdc++.h>
using namespace std ;

int GCD( int a , int b ) {
      if( a == 0 || b == 0 ) return a+b ; 
      return GCD( b%a , a ) ;
}

int main() {      
      int T ; cin >> T ; 
      while( T-- ) {
            int N ; cin >> N ; 
            int c = 0 ; 
            bool show0 = false ;
            int num1 ; cin >> num1 ; 
            for( int i = 1 ; i < N ; i++ ) {
                  int ele ; cin >> ele ; 
                  if( GCD(num1,ele) == 1 ) {
                        show0 = true ; continue ;
                  } else {
                        c++ ; num1 = GCD(num1,ele) ; 
                  } 
            }
            if(show0) {
                  printf("0\n") ; continue ; 
            }
            if( c == N - 1 ) printf("-1\n") ;
            else printf("%d\n", c );
      }
}