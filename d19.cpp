#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
constexpr ll INF = 1e9 + 7 ;

bool isPrime( ll number ) {
      if( number == 2 ) return false ;
      for( int i = 2 ; i*i <= number ; i++ ) {
            if( number % i == 0 ) return false ;
      } return true ;
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;
      
      int t ;
      cin >> t ;
      
      while( t-- ) {
            int n ; 
            cin >> n ; 
            
            bool prime = false; 
            vector<ll> arr(n) ; 
            for( int i = 0 ; i < n ; i++ ) {
                  cin >> arr[i] ;
                  if(isPrime(arr[i])) {
                        prime = true ;
                  }
            }
            if(prime) {
                  cout << 0 << endl ; 
                  continue ;
            }       
            sort( arr.begin() , arr.end() ) ;
            if( arr[0] == 1 ) {
                  cout << 0 << endl ;
                  continue ; 
            }

            for( int i = 0 ; i < n - 1 ; i++ ) {
                  for( int j = i + 1 ; j < n ; j++ ) 
                        if( arr[j] % arr[i] == 0 && arr[i] != INF ) {
                              arr[j] = INF ;
                  }
            }
            
            int count = 0 ;
            for( int i = 0 ; i < n ; i++ ) {
                  if ( arr[i] == INF ) count++ ; 
            }
            if( count == n - 1 ) {
                  cout << -1 << endl ;
                  continue ;
            }
            cout << count << endl ;
      }
}