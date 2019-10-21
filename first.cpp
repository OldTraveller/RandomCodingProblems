#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int n ; cin >> n ; 
       map<int,int> counts ; 
       for ( int i = 0 ; i < n ; i++ ) {
              int ele ; cin >> ele ; 
              counts[ele]++ ; 
       }
       int total = n ; 
       auto it = counts.begin() ; 
       while ( total > 0 ) {
              cout << total << endl ; 
              total -= ( it -> second ) ; 
       }
}