#include <bits/stdc++.h>
#define N 5 
using namespace std ;

void printSolution( int board[N][N] ) {
       for( int i = 0 ; i < N ; i++ ) {
              for( int j = 0 ; j < N ; j++ ) {
                     cout << board[i][j] << " " ; 
              }cout << endl ; 
       }
}

bool isSafe( int board[N][N] , int row , int column ) {
       for( int i = 0 ; i < N ; i++ ) 
              if(board[row][i]) return false ; 
       for( int i = row , j = column ; i >= 0 && j >= 0 ; i-- , j-- ) 
              if(board[i][j]) return false ; 
       for( int i = row , j = column ; i < N && j >= 0 ; j-- , i++ )
              if(board[i][j]) return false ; 
       return true ; 
}

bool NQueenUtil( int board[][N] , int col ) {
       if( col >= N ) return true ; 
       for( int i = 0 ; i < N ; i++ ) {
              if( isSafe( board , i , col ) ) {
                     board[i][col] = 1  ;
                     if( NQueenUtil( board , col + 1 ) ) return true ; 
                     board[i][col] = 0 ; 
              }
       }
       return false ; 
}

bool NQueen( ) {
       int board[N][N] ; 
       for( int i = 0 ; i < N ; i++ ) 
              for( int j = 0 ; j < N ; j++ ) board[i][j] = 0 ; 

       if( NQueenUtil( board , 0 ) ) {
              printSolution(board) ; 
       } else {
              cout << "Solution doesnt exist ! " << endl ; 
              return false ;
       }
}

int main() {
       NQueen() ;
}