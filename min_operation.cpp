#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int min( int a , int b , int c ) {
      return min( a , min( b , c ) ) ;
}

int Min_Operations( char* str1 , char* str2 , int m , int n ) {
      if( m == 0 ) {
            return n ; 
      }

      if( n == 0 ) {
            return m ; 
      }

      if( str1[m-1] == str2[n-1] ) {
            return Min_Operations( str1 , str2 , m-1 , n-1 ) ; 
      }

      else
            return 1 + min(Min_Operations( str1, str2 , m-1 , n-1 ) , Min_Operations( str1, str2 , m , n-1 ) , Min_Operations( str1, str2 , m-1 , n )) ; 
}

int main() {
      char string1[] = "abhishek" ; 
      char string2[] = "abhishlp" ; 

      int length1 = strlen( string1 ) ; 
      int length2 = strlen( string2 ) ;

      cout << "MINIMUM OPERATIONS REQ : " << Min_Operations( string1 , string2 , length1 , length2 ) << endl ; 

}