#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 
constexpr int SIZE = 1000 ; 
int arr[SIZE][SIZE] ; 

void Refresh() {
       for ( int i = 0 ; i < SIZE ; i++ ) {
              for ( int j = 0 ; j < SIZE ; j++ ) {
                     arr[i][j] = 0 ; 
              }
       }
}

bool check ( int n , int m ) {
       for ( int i = 0 ; i < n ; i++ ) {
              for ( int j = 0 ; j < m ; j++ ) {
                     if ( arr[i][j] ) return true ; 
              }
       }
       return false ;
}

bool check_middle_row ( int n , int m ) {
       for ( int i = 0 ; i < m ; i++ ) {
              if ( arr[1][i] ) return true ; 
       }
       return false ;
}

bool check_middle_col ( int n , int m ) {
       for ( int j = 0 ; j < n ; j++ ) {
              if ( arr[j][1] ) return true ; 
       } 
       return false ;
}

bool search ( int n , int m ) {
       for ( int i = 0 ; i < n - 3 ; i++ ) {
              for ( int j = 0 ; j < m - 3 ; j++ ) {
                     if ( arr[i][j] ) {
                            if ( arr[i][j+2] or arr[i+2][j] ) {
                                   return true ;
                            }
                     }
              }
       }
       return false ;
}

bool check_second ( int n , int m ) {
       for ( int i = 0 ; i < m ; i++ ) {
              if ( arr[1][i] ) return true ;
       }

       for ( int j = 0 ; j < n ; j++ ) {
              if ( arr[j][1] ) return true ; 
       }
       return false ;
}

bool check_second_last ( int n , int m ) {
       for ( int i = 0 ; i < m ; i++ ) {
              if ( arr[n-2][i] ) return true ; 
       }

       for ( int j = 0 ; j < n ; j++ ) {
              if ( arr[j][m-2] ) return true ;
       }
       return false ;
}

bool check_for_partial ( int n , int m ) {
       int counts = 0 ;
       vector< pair<int,int> > ij ; 
       for ( int i = 0 ; i < m ; i++ ) {
              if ( arr[0][i] ) {
                     counts ++ ; 
                     if ( i == 1 or i == m - 2 ) return true ; 
                     ij.push_back({0,i}) ; 
              }
       }
       if ( counts == 0 ) return false ;
       if ( counts == 1 ) return false ; 
       for ( int i = 0 ; i < ij.size() - 1 ; i++ ) {
              if ( ( ij.at(i).first - ij.at(i+1).first == 2 )
              or ( ij.at(i).second - ij.at(i+1).second == 2 ) ) return true ;
       }
       return false ;
}

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ; cin >> t ; 
       while ( t-- ) {
              int n , m ; 
              cin >> n >> m ;
              // Refresh() ; 
              for ( int i = 0  ; i < n ; i++ ) {
                     string something ; cin >> something ; 
                     for ( int j = 0 ; j < m ; j++ ) {
                            if ( something[j] == '#' ) {
                                   arr[i][j] = 1 ; 
                            } else arr[i][j] = 0 ;
                     }
              }

              bool isPossible = true ; 
              if ( n == 2 or m == 2 ) {
                     if ( check ( n , m ) ) isPossible = false ;
              }
              // } else {
              //        if ( search ( n , m ) ) isPossible = false ;
              if ( n == 3 and check_middle_row( n , m ) ) isPossible = false ;
              if ( m == 3 and check_middle_col( n , m ) ) isPossible = false ;
              //        if ( n != 3 and ( check_second ( n , m ) or check_second_last( n , m ) ) ) isPossible = false ; 
              // }
              if ( check_for_partial( n , m ) ) isPossible = false ; 
              if ( isPossible ) cout << "YES" << endl ; 
              else cout << "NO" << endl ;
       }
}