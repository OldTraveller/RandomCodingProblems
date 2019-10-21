#include <bits/stdc++.h>
#define ll long long 
#define boost ios :: sync_with_stdio(false) ;\
              cin.tie( nullptr ) ;\
              cout.tie( nullptr ) ;
using namespace std ;

int main() {
       boost
       ll n ; 
       cin >> n ; 

       pair<ll,ll> pehla ; 
       cin >> pehla.first >> pehla.second ;
       bool hai = true ;
       bool alert = false ;
       for( ll i = 2 ; i <= n ; i++ ) {
              pair<ll,ll> dusra ;
              cin >> dusra.first >> dusra.second ; 
               if(alert && dusra.second == 10){
                     hai = false ;
                     break ;
              }
              if(dusra.second == 10) alert = true ;
              if( dusra.first < pehla.first || dusra.second < pehla.second ) {
                     hai = false ;
                     break ;
              } pehla = dusra ; 
       }
       if(!hai)
              cout << "NO" << endl ; 
       else 
              cout << "YES" << endl ;
}