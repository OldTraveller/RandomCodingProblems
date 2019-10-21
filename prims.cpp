#include <bits/stdc++.h>
#define N 5 
using namespace std ;

int minKey( int key[] , bool mstSet[] ) {
       int mins = INT_MAX ; 
       int min_index ; 
       for( int i = 0 ; i < N ; i++ ) {
              if( !mstSet[i] && key[i] < mins ) {
                     min_index = i ; 
                     mins = key[i] ; 
              }
       }
       return min_index ; 
}

int printMst( int parent[] , int n , int graph[N][N] ) {
       for( int i = 0 ; i < n ; i++ ) {
              cout << i << " " <<  parent[i] << " " << graph[i][parent[i]] << endl ; 
       }
}

void Prims( int graph[][N] ) {
       int parent[N] ; 
       bool mstSet[N] ; 
       int key[N] ; 

       for( int i = 0 ; i < N ; i++ ) {
              mstSet[i] = false ; key[i] = INT_MAX ; 
       }

       key[0] = 0 ; 
       mstSet[0] = true ; 
       for( int counts = 0 ; counts < N -1  ; counts++ ) {
              int u = minKey( key , mstSet ) ; 
              mstSet[u] = true ; 

              for( int v = 0 ; v < N ; v++ ) {
                     if( graph[u][v] && !mstSet[v] && graph[u][v] < key[v] ) {
                            parent[v] = u ; 
                            key[v] = graph[u][v] ; 
                     }
              }
       }
       printMst(parent , N , graph ) ; 
}

int main()
{
   /* Let us create the following graph
          2    3
      (0)--(1)--(2)
       |   / \   |
      6| 8/   \5 |7
       | /     \ |
      (3)-------(4)
            9          */
   int graph[N][N] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
 
    // Print the solution
    Prims(graph);
 
    return 0;
}