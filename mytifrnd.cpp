#include <bits/stdc++.h>
using namespace std ;
using LL = long long ;

int main() {
      int t ; cin >> t ;
      while( t-- ) {
            int n , k ; cin >> n >> k ;
            vector<int> odd , even ; 
            for( int i = 1 ; i <= n ; i++ ) {
                  int ele ; cin >> ele ;
                  if(i&1) odd.push_back(ele) ;
                  else even.push_back(ele) ; 
            }
            LL odd_sum = 0 , even_sum = 0 ; 
            for( auto it : odd ) odd_sum += it ; 
            for( auto it : even ) even_sum += it ; 
            if(even_sum > odd_sum) {
                  printf("YES\n") ; continue ; 
            }
            sort( odd.begin() , odd.end() )  ;
            sort( even.begin() , even.end() , greater<int>() ) ;
            bool yes = false ;
            while( k-- && odd.size() && even.size() ) {
                  if( odd.back() > even.back() ) {
                        odd_sum = odd_sum + even.back() - odd.back() ; 
                        even_sum = even_sum - even.back() + odd.back() ;
                        if( even_sum > odd_sum ) {
                              yes = true ; break ; 
                        }
                        odd.pop_back() ; even.pop_back() ;
                  }
            }
            if(yes) printf("YES\n") ; 
            else printf("NO\n") ; 
      }
}