#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

void UGLY_NUMBER( int n ) {
      int ugly[n+1] ; 
      int i2 = 0 ;
      int i3 = 0 ; 
      int i5 = 0 ; 
      unsigned int next2 = 2 ;
      unsigned int next3 = 3 ;
      unsigned int next5 = 5 ;
      unsigned int next = 1 ; 

      ugly[0] = 1 ;
      for( int i = 1 ; i <= n ; i++ ) {
            next = min( next2 , min( next3 , next5 ) ) ;
            ugly[i] = next ; 

            if( next == next2 ) {
                  i2++ ; 
                  next2 = ugly[i2]*2 ; 
            }
            if( next == next3 ) {
                  i3++ ; 
                  next3 = ugly[i3]*3 ; 
            }
            if( next == next5 ) {
                  i5++ ; 
                  next5 = ugly[i5]*5 ;
            }
      }
      for( int i = 0 ; i <= n ; i++ ) {
            cout << ugly[i] << " " ;
      }
}

int main() {
      UGLY_NUMBER(30) ;
}