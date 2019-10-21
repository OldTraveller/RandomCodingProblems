#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n ; 
      cin >> n ;

      int arr[n+1] ; 

      for( ll i = 1 ; i <= n ; i++ ) {
            cin >> arr[i] ;
      }

      vector<int> vec ; 
      ll count = 0 ; 

      ll maximum = 0 ; 
      ll savei = 0 ; 

      for( ll i = 1 ; i <= n ; i++ ) {
            if( vec.size() > 0 && vec[vec.size()-1] != arr[i] ) {
                        vec.pop_back() ; 
                        count-- ; 
            }

            else {
                  vec.push_back(arr[i]) ; 
                  count++ ;
                  ll changed = maximum ; 
                  maximum = max( maximum , count )  ; 
                  if( maximum != changed ) {
                        savei = i ; 
                  }
            }
      }
      
      cout << savei << endl ;
}