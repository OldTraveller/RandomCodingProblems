#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

string longest( string name ) {
       int n = name.length() ; 

       int dp[n+1][n+1] ; 

       for( int i = 0 ; i <= n ; i++ ) {
              for( int j = 0 ; j <= n ; j++ ) {
                     dp[i][j] = 0 ; 
              }
       }

       for( int i = 1 ; i <= n ; i++ ) {
              for( int j = i ; j <= n ; j++ ) {
                     if( name.at(i-1) == name.at(j-1) && i != j ) {
                            dp[i][j] = 1 + dp[i-1][j-1] ;
                     }
                     else {
                            dp[i][j] = max( dp[i-1][j] , dp[i][j-1] ) ;
                     }
              }
       }

       string answer = "" ;        
       int i = n ; 
       int j = n ; 

       while( i && j ) {
              if( dp[i][j] == dp[i-1][j-1] + 1 ) {
                     answer += name.at(i-1) ; 
                     i-- , j-- ; 
              }
              else if( dp[i-1][j] == dp[i][j] ) {
                     i-- ;
              }
              else j-- ;
       }

       reverse( answer.begin() , answer.end() ) ; 
       return answer ; 
}

int main() {
       cout << "ENTER THE STRING : " ; 
       string name ;
       cin >> name ; 

       cout << "STRING  IS : " << longest(name) << endl ; 
}