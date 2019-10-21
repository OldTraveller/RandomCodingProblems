#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
const int n = 4 ;

int final_path[n+1] ; 
bool visited[n] ; 
int final_res = INT_MAX ; 

void copyToFinal( int curr_path[] ) {
       for( int i = 0 ; i < n ; i++ ) {
              final_path[i] = curr_path[i] ; 
       } final_path[n] = curr_path[0] ; 
}

int firstMin( int adj[n][n] , int i ) {
       int first = INT_MAX ; 
       for( int k = 0 ; k < n ; k++ ) {
              if( adj[i][k] < first && i != k ) {
                     first = adj[i][k] ; 
              }
       }
       return first ;
}

int secondMin( int adj[n][n] , int i ) {
       int first = INT_MAX , second = INT_MAX ;
       for( int j = 0 ; j < n ; j++ ) {
              if( i == j ) continue ; 
              else if( adj[i][j] < first ) {
                     second = first ; 
                     first = adj[i][j] ; 
              } else if( adj[i][j] < second && adj[i][j] != first ) {
                     second = adj[i][j] ; 
              }
       }
       return second ; 
}

void TSPRec( int adj[n][n] , int curr_bound , int curr_weight , int level , int curr_path[] ) {
       if( level == n ) {
              if( adj[curr_path[level-1]][curr_path[0]] != 0 ) {
                     int curr_res = curr_weight + adj[curr_path[level-1]][curr_path[0]] ; 
                     if( curr_res < final_res ) {
                            copyToFinal(curr_path) ;
                            final_res = curr_res ; 
                     }
              }
              return ; 
       }
       for( int i = 0 ; i < n ; i++ ) {
              int temp = curr_bound ; 
              curr_weight = adj[curr_path[level-1]][i] ; 

              if( level == 1 ) {
                     curr_bound -= (firstMin(adj , curr_path[level-1]) + first_mind )
              }
       }
}


int main() {
       
}