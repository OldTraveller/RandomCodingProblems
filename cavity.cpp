#include <bits/stdc++.h>
#define SIZE 100
using namespace std ;
using ll = long long ; 

void display( char matrix[][SIZE] , int n ) {
       for ( int i = 0 ; i < n ; i++ ) {
              for ( int j = 0 ; j < n ; j++ ) {
                     cout << matrix[i][j] ;
              } cout << endl ;
       }
}

bool check( int a , int b ) {
       return a < b ;
}

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int n ; cin >> n ; 
       char matrix[SIZE][SIZE] ; 
       for ( int i = 0 ; i < n ; i++ ) {
              string something ; cin >> something ;
              for ( int j = 0 ; j < something.size() ; j++ ) {
                     matrix[i][j] = something.at(j) ; 
              }
       }      
       if ( n > 2 ) {
              for ( int i = 1 ; i < n - 1 ; i++ ) {
                     for ( int j = 1 ; j < n - 1 ; j++ ) {
                            if ( check( matrix[i-1][j] , matrix[i][j] ) and
                                 check( matrix[i+1][j] , matrix[i][j] ) and
                                 check( matrix[i][j+1] , matrix[i][j] ) and
                                 check( matrix[i][j-1] , matrix[i][j] )   
                             ) matrix[i][j] = 'X' ;
                     }
              }
       } 
       display( matrix , n ) ;
}