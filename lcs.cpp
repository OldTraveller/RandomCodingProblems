#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int lcs( char *l , char *r , int m , int n ) {
      int arr[m+1][n+1] ; 

      for( int i = 0 ; i <= m ; i++ ) {
            for( int j = 0 ; j <= n ; j++ ) {
                  if( i == 0 || j == 0 ) 
                        arr[i][j] = 0 ; 
                  else if( l[i-1] == r[j-1] ) 
                        arr[i][j] = 1 + arr[i-1][j-1] ; 
                  else 
                        arr[i][j] = max( arr[i-1][j] , arr[i][j-1] ) ; 
            }
      }
      return arr[m][n] ;
}

int main() {
      char str1[] = "abcasdfsfd" ; 
      char str2[] = "abczzzzzzz" ; 

      cout << "LONGEST IS : " << lcs( str1 , str2 , strlen(str1) , strlen(str2) ) ;

}