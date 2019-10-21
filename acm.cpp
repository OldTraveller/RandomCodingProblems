#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int n , m ; 
       cin >> n >> m ;
       vector< bitset<500> > person ; 
       for ( int i = 0 ; i < n ; i++ ) {
              string knowledge ; cin >> knowledge ; 
              bitset<500> know ( knowledge ) ; 
              person.push_back( know ) ; 
       }

       int maxi = INT_MIN ; int temp = INT_MIN ;  
       for ( int i = 0 ; i < person.size() - 1 ; i++ ) {
              for ( int j = i + 1 ; j < person.size() ; j++ ) {
                     int bits_set = ( person.at(i) | person.at(j) ).count() ; 
                     if ( bits_set > maxi ) {
                            maxi = bits_set ; 
                            temp = 0 ;
                     }
                     if ( ( person.at(i) | person.at(j) ).count() == maxi ) temp++ ; 
              }
       }
       printf("%d\n%d" , maxi , temp ) ;
}