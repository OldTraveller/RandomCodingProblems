#include <bits/stdc++.h>
using namespace std ;
#define N 8
int board[N][N] ;

void printSolution( int board[N][N] , int n ) {
       for( int i = 0 ; i < n ; i++ ) {
              for( int j = 0 ; j < n ; j++ ) {
                     cout << board[i][j] << " " ; 
              } cout << endl ; 
       }
}

bool isSafe( int board[][N] , int row , int col , int n ) {
       for( int i = 0 ; i < col ; i++ ) if(board[row][i]) return false ;
       for( int i = row , j = col ; j >= 0 and i >= 0 ; i-- , j-- ) if(board[i][j]) return false ;
       for( int i = row , j = col ; i < n and j >= 0 ; i++ , j-- ) if(board[i][j]) return false ;
       return true ;  
}

bool NQueenUtil( int board[N][N] , int col , int n ) {
       if( col >= n ) return true ; 
       for( int i = 0 ; i < n ; i++ ) {
              if( isSafe(board , i , col , n ) ) {
                     board[i][col] = 1 ;
                     if( NQueenUtil( board , col + 1 , n ) ) return true ; 
                     board[i][col] = 0 ; 
              }
       }
       return false ; 
}

void NQueen() {
       cout << "HOW MANY ? " << endl ; 
       int n ; cin >> n ; 
       for( int i = 0 ; i < n ; i++ ) {
              for( int j = 0 ; j < n ; j++ ) {
                     board[i][j] = 0 ; 
              }
       }

       if( !NQueenUtil( board , 0 , n ) ) {
              cout << "Solution Doesnt Exist ! " << endl ;
              return ; 
       } 
       printSolution(board,n) ; 
}


int main() {
       NQueen() ; 
}