#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n , m ;
      cin >> n >> m ;
      int arr[n+1] ; 
      memset( arr , 0 , sizeof( arr ) ) ;

      for( int i = 1 ; i <= m ;  i++ ) {
            int pos ; 
            cin >> pos ; 
            arr[pos]++ ; 
      }

      cout << *min_element( arr + 1 , arr + n + 1 ) << endl ;
      
}