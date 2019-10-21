#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      vector<int> vec(10) ; 
      for( int i = 0 ; i < 10 ; i++ ) {
            vec.push_back(i+1) ;
      } 

      auto it = lower_bound( vec.begin() , vec.end() , 4 ) ; 
      cout << *it << endl ; 
}