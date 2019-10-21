#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int digitSum ( ll number ) {
       int sum = 0 ; 
       while ( number > 0 ) {
              sum += ( number%10 ) ; 
              number /= 10 ; 
       }
       return sum ; 
}

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       for ( int i = 0 ; i < 50 ; i++ ) {
              cout << i << " has " << digitSum ( i ) ; 
       }
}