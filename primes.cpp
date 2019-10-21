#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

bool isPrime( int n ) {
      if( n == 1 ) return false ;
      for( int i = 2 ; i*i <= n ; i++ ) {
            if( n%i == 0 ) {
                  return false ;
            }
      }
      return true ;
}

int main() {
      int count = 0 ; 
	int sum = 0 ; 
      for( int i = 1 ; i < 100 ; i++ ) {
            if(isPrime(i)) cout << i << " " , count++ ; sum += i ; 
      }
	cout << "SUM OS : " << sum << endl ;
      cout << endl << "count : " << count << endl ;
}
