#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n , m ; 
      cin >> n >> m ;

      string arr[n] ; 
      for( int i = 0 ; i < n ; i++ ) {
            cin >> arr[i] ; 
            if( count( arr[i].begin() , arr[i].end() ,  arr[i].at(0) ) != arr[i].size() ) {
                  cout << "NO" << endl ;
                  return 0 ;
            } 
      }
      if( n == 1 ) {
            cout << "YES" << endl ;
            return 0 ;
      }

      for( int i = 1 ; i < n ; i++ ) {
            if( arr[i] == arr[i-1] ) {
                  cout << "NO" << endl ;
                  return 0 ; 
            }
      }

      for( int i = 0 ; i < n - 1 ; i++ ) {
            if( arr[i] == arr[i+1] ) {
                  cout << "NO" << endl ;
                  return 0 ; 
            }
      }
      cout << "YES" << endl ;
}