#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
       ll n , k ; cin >> n >> k ; 
       ll arr[n] ; 
       for( ll i = 0 ; i < n ; i++ ) cin >> arr[i] ; 
       sort( arr , arr + n ) ; 
       if( k == 0 ) cout << -1 << endl ; 
       else if( k == n ) cout << arr[n-1] + 1 << endl ;
       else if( arr[k-1] != arr[k] ) cout << arr[k-1]+1 << endl ;
       else cout << -1 << endl ;
}