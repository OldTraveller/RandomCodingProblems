#include <bits/stdc++.h>
using namespace std ;
#define INF 999
int a , b , cost[9][9] ;
int parent[9] ; 
int mincost ; 
int min_edge ; 
int n , ne = 1 ; 
int mins ; 
int u , v ; 

int uni( int i , int j ) {
       if( i != j ) {
              parent[j] = i ; 
              return 1 ;
       } return 0 ; 
}

int find( int i ) {
       while(parent[i]) i = parent[i] ; 
       return i ;
}

int main() {
       cout << "IMPLEMENTATION OF KRUSKALS ALGORITHM " << endl ; 
       cout << "ENTER THE NUMBER OF VERTICES " << endl ; 
       cin >> n ; 
       cout << "ENTER THE COST ADJACENCY MATRIX : " << endl ; 
       for( int i = 1 ; i <= n ; i++ ) {
              for( int j = 1 ; j <= n ; j++ ) {
                     cin >> cost[i][j] ; 
                     if(cost[i][j] == 0) cost[i][j] = INF ; 
              }
       }
       cout << "THE EDGES OF THE MINIMUM SPANNING TREE ARE : " << endl ;         
       while( ne < n ) {
              for( int i = 1 , mins = INF ; i <= n ; i++ ) {
                     for( int j = 1 ; j <= n ; j++ ) {
                            if( cost[i][j] < mins ) {
                                   a = u = i ; 
                                   b = v = j ; 
                                   mins = cost[i][j] ; 
                            }
                     }
              }
              u = find(u) ; 
              v = find(v) ; 
              if( uni(u,v) ) {
                     mincost += mins ; 
                     cout << "Edge no : " << ne++ << "("<<a<<","<<b<<")" << endl ; 
              }
              cost[a][b] = cost[b][a] = INF ; 
       }
}
