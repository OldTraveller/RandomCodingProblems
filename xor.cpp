#include <bits/stdc++.h>
using namespace std ;
using LL = long long ;

int main() {
      int T ; cin >> T ; 
      while( T-- ) {
            LL n ; cin >> n ;
            LL ans = 0 ;
            for( LL i = 0 ; i < n ; i++ ) {
                  LL ele ; cin >> ele ;
                  ans ^= ( ele + ele ) ;
            }
            cout << ans << endl ;
      }
}