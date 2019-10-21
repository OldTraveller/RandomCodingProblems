#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
constexpr ll MOD = 1e9 + 7 ; 
vector<ll> fibs(1e5) ;

void Initialize() {
      fibs[0] = 1 ; 
      fibs[1] = 2 ; 
      for( ll i = 2 ; i < 1e5 ; i++ ) {
            fibs[i] = (fibs[i-1]%MOD + fibs[i-2]%MOD)%MOD ; 
      }
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;
      
      Initialize() ;  
      int t ;
      cin >> t ; 
      while( t-- ) {
            ll m , n ; 
            cin >> m >> n ; 

            ll A[m] ;
            ll B[m] ; 

            for( ll i = 0 ; i < m ; i++ ) cin >> A[i] ; 
            for( ll i = 0 ; i < m ; i++ ) cin >> B[i] ; 

            if( n == 1 ) {
                  ll sum = 0 ; 
                  for( ll i = 0 ; i < m ; i++ ) {
                        sum += (m*A[i])%MOD ;
                        sum %= MOD ; 
                  }
                  cout << sum << endl ; 
                  continue ;
            }

            if( n == 2 ) {
                  ll sum = 0 ; 
                  for( ll i = 0 ; i < m ; i++ ) {
                        sum += (m*B[i])%MOD ;
                        sum %= MOD ;
                  }
                  cout << sum << endl ;
                  continue ;
            }
            
            if( n == 3 ) {
                  ll answer = 0 ; 
                  for( ll i = 0 ; i < m ; i++ ) {
                        answer += m*(A[i]+B[i])%MOD ;
                        answer %= MOD ;
                  }
                  cout << answer << endl ;
                  continue ;
            }

            ll answer = 0 ; 
            ll f2 = 0 ;
            ll f1 = 0 ; 
            for( ll i = 0 ; i < m ; i++ ) {
                  f2 += ( m*B[i] )%MOD ;
                  f2 %= MOD ; 
                  f1 += ( m*A[i] )%MOD ;
                  f1 %= MOD ;
            }

            answer = ((fibs[n-3]*f2)%MOD + (fibs[n-4]*f1)%MOD )%MOD ;  
            answer %= MOD ;
            cout << answer << endl ;
      }
}