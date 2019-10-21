#include <bits/stdc++.h>
#define SIZE 1000
using namespace std ;
using ll = long long ; 
int arr[SIZE][SIZE] ;

bool mila ( int arr[SIZE][SIZE] , int n , int m ) {
       if ( n == 3 ) {
              for ( int j = 0 ; j < m - 2 ; j++ ) {
                     if ( arr[0][j] ) if ( arr[0][j+2] ) return true ;
                     if ( arr[2][j] ) if ( arr[2][j+2] ) return true ;
              }
              for ( int j = 0 ; j < m ; j++ ) if ( arr[1][j] ) return true ;
       } else {
              for ( int j = 0 ; j < n - 2 ; j++ ) {
                     if ( arr[j][0] ) if ( arr[j+2][0] ) return true ;
                     if ( arr[j][2] ) if ( arr[j+2][2] ) return true ;
              }
              for ( int j = 0 ; j < n ; j++ ) if ( arr[j][1] ) return true ;
       }
       return false ; 
}

void display ( int arr[][SIZE] , int n , int m ) {
       for ( int i = 0 ; i < n ; i++ ) {
              for ( int j = 0 ; j < m ; j++ ) {
                     cout << arr[i][j] << " " ; 
              } cout << endl ; 
       } 
}

void refresh() {
       for ( int i = 0 ; i < SIZE ; i++ ) {
              for ( int j = 0 ; j < SIZE ; j++ ) {
                     arr[i][j] = 0 ;
              }
       }
}
int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       // solution for first row thingi 
       int t ; scanf("%d" , &t ) ; 
       while (t--) {
              int n , m ; scanf("%d %d" , &n , &m ) ; 
              
              vector<int> how_many ; 
              for ( int j = 0 ; j < n ; j++ ) {
                     char something[m] ; 
                     scanf( "%s" , something ) ;
                     int sum = 0 ; 
                     for ( int i = 0 ; i < m ; i++ ) {
                            if ( something[i] == '#' ) arr[j][i] = 1 , sum++ ; 
                     }
                     how_many.push_back( sum ) ; 
              }
              
              // display( arr , n , m ) ; 
              bool ho_sakta_hai = true ; 
              if ( n == 2 or m == 2 ) {
                     if ( n == 2 ) {
                            for ( int j = 0 ; j < m ; j++ ){
                                   if ( how_many.at(j) > 0 ) {
                                          ho_sakta_hai = false ; 
                                   }
                            }
                     } else {
                            for ( int j = 0 ; j < n ; j++ ) {
                                   if ( how_many.at(j) > 0 ) {
                                          ho_sakta_hai = false ; 
                                   }
                            }
                     }
              } else if ( n == 3 or m == 3 ) {
                     if ( mila( arr , n , m ) ) ho_sakta_hai = false ; 
              } else {
                     for ( int i = 0 ; i < n - 2 ; i++ ) {
                            for ( int j = 0 ; j < m - 2 ; j++ ) {
                                   if ( arr[i][j] ) {
                                          if ( arr[i+2][j] or arr[i][j+2] ) ho_sakta_hai = false ; 
                                   }
                            }
                     }
              }
              
              if ( ho_sakta_hai ) printf("YES\n") ; 
              else printf("NO\n") ; 
              refresh() ; 
       }
}