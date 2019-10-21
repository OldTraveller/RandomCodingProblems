#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n , m , k ; 
      cin >> n >> m >> k ;

      if( k <= n ) {
            if( k == n ) {
                  cout << n << " " << 2 << endl ;
            } else {
                  cout << k + 1 << " " << 1 << endl ;
            }
      } else {
            k -= n ;
            ll col_left = m - 1 ;
            if( k < col_left ) {
                  cout << n << " " << 1 + k << endl ;
            } else if( k%col_left == 0 ) {
                  ll height = k/col_left ; 
                  if((k/col_left)&1){
                        cout << n - k/col_left  << " " << m << endl ;
                  }else {
                        cout << n - k/col_left << " " << 2 << endl ;
                  }
            } else {
                  ll height = k/col_left ; 
                  ll offset = k%col_left + 1 ;
                  if(height&1){
                        cout << n - height << " " << m - offset + 1 << endl ;
                  } else {
                        cout << n - height - 1 << " " << offset << endl ;
                  }
            }
      }
}