#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

ll findLCM ( ll arr[] , int n ) {
       ll ans = arr[0] ; 
       for ( int i = 1 ; i < n ; i++ ) 
              ans = ( arr[i]*ans )/(__gcd( arr[i] , ans ) ) ; 
       return ans ; 
}

ll findGCD ( ll arr[] , int n ) {
       ll ans = arr[0] ; 
       for ( int i = 0 ; i < n ; i++ ) ans = __gcd ( ans , arr[i] ) ; 
       return ans ; 
}

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int a , b ; cin >> a >> b ; 
       ll first[a] ; ll second[b] ; 
       for ( int i = 0 ; i < a ; i++ ) cin >> first[i] ; 
       for ( int i = 0 ; i < b ; i++ ) cin >> second[i] ; 

       ll one = findLCM( first , a ) ; 
       ll two = findGCD( second , b ) ; 
       cout << two/one << endl ;
}