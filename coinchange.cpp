#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

ll count( ll S[], ll m, ll n )
{
    ll dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(ll i=0; i<m; i++)
        for(ll j=S[i]; j<=n; j++)
            dp[j] += dp[j-S[i]];
    return dp[n];
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll n , m ;
      cin >> n >> m ; 

      ll coins[n] ; 
      for( ll i = 0 ; i < m ; i++ ) {
            cin >> coins[i] ;
      }      

      cout << count( coins , m , n ) << endl ;
}