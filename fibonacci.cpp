#include <bits/stdc++.h>
using namespace std ;
using LL = long long ;
constexpr LL MODULO = 1e9 + 7 ; 
constexpr LL UP = 1e5 ; 
LL FIB[1000005] ;

void precal() {
      FIB[0] = 1 ; FIB[1] = 2 ; 
      for( LL i = 2 ; i <= UP ; i++ ) {
            FIB[i] = (FIB[i-1]%MODULO+FIB[i-2]%MODULO)%MODULO ; 
      }
}

int main() {
      precal() ;  
      int t ; cin >> t ; 
      while( t-- ) {
            LL m , n ; 
            cin >> m >> n ; 

            LL A[m] , B[m] ; 

            for( LL i = 0 ; i < m ; i++ )
                   cin >> A[i] ; 
            for( LL i = 0 ; i < m ; i++ )
                   cin >> B[i] ; 

            if( n == 1 ) {
                  LL pehla = 0 ; 
                  for( LL i = 0 ; i < m ; i++ ) {
                        pehla += (m*A[i])%MODULO ; pehla %= MODULO ; 
                  }
                  cout << pehla << endl ; continue ; 
            }

            if( n == 2 ) {
                  LL dusra = 0 ; 
                  for( LL i = 0 ; i < m ; i++ ) {
                        dusra += (m*B[i])%MODULO ; dusra %= MODULO ;
                  }
                  cout << dusra << endl ; continue ;
            }
            
            if( n == 3 ) {
                  LL teesra = 0 ; 
                  for( LL i = 0 ; i < m ; i++ ) {
                        teesra += m*(A[i]+B[i])%MODULO ; teesra %= MODULO ;
                  }
                  cout << teesra << endl ; continue ;
            }

            LL ThreeGreater = 0 , F2 = 0 , F1 = 0 ; 
            for( LL i = 0 ; i < m ; i++ ) {
                  F2 += ( m*B[i] )%MODULO ; 
                  F1 += ( m*A[i] )%MODULO ; 
                  F1 %= MODULO ;
                  F2 %= MODULO ; 
            }
            ThreeGreater = ((FIB[n-3]*F2)%MODULO + (FIB[n-4]*F1)%MODULO )%MODULO ; ThreeGreater %= MODULO ;
            cout << ThreeGreater << endl ;
      }
}