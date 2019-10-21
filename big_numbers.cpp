#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
constexpr ll MOD  = 1e9 + 7 ; 

ll modPow(ll base, ll exp ) {

    base = base%MOD;

    if (exp == 0)
        return 1;

    else if (exp == 1)
        return base;

    else if (exp%2 == 0)
        return modPow(base*base%MOD, exp/2 );

    else
        return base*modPow(base, exp-1 )%MOD; 

}

int main() {
    ios :: sync_with_stdio(false) ;
    cin.tie( nullptr ) ;
    cout.tie( nullptr ) ;

    ll t ;
    cin >> t ;
    while( t-- ) {
            ll n ; 
            cin >> n ;

            ll w ; 
            cin >> w ;

            ll power_to_consider = n-2 ;

            ll count = 0 ;
            
            if( w == 0 ) {
                count = 9 ; 
            }
            else if( w > 0 ) {
                count = 9 - w ; 
            }
            else {
                count = w + 10 ; 
            }

            if( w > 9 || w < -9 ) {
                count = 0 ;
            }

            ll power_mult = modPow( 10 , power_to_consider)%MOD ; 

            cout << ( (count)*(power_mult))%MOD << endl ;
    }
}