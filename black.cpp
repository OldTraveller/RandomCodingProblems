#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

/* AUTHOR : Rai */ 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ; cin >> t ; 
       while ( t-- ) {
              ll b , w ; cin >> b >> w ; 
              ll bc , wc , z ; cin >> bc >> wc >> z ; 
              cout << min(b*bc+w*wc,min(b*(wc+z)+w*wc,w*(bc+z)+b*bc)) << endl ;
       }
}