#include <bits/stdc++.h>
#define V 9 
using namespace std ;

int minDistance( int dist[] , bool sptset[] ) {
       int mins = INT_MAX ; 
       int min_index ; 
       for( int i = 0 ; i < V ; i++ ) {
              if( !sptset[i] && dist[i] < mins ) {
                     min_index = i ; 
                     mins = dist[i] ; 
              }
       }
       return min_index ;
}

int printSolution( int dist[] , int n ) {
       for( int i = 0 ; i < V ; i++ ) {
              cout << i << " " << dist[i]  << endl ; 
       }
}

void dijkstra( int graph[V][V] , int src ) {
       bool sptset[V] ; 
       int dist[V] ; 

       for( int i = 0 ; i < V ; i++ ) {
              sptset[i] = false ; 
              dist[i] = INT_MAX;  
       }

       dist[src] = 0 ; 
       sptset[src] = true ;
       for( int counts = 0 ; counts < V - 1  ; counts++ ) {
              int u = minDistance( dist , sptset ) ; 
              sptset[u] = true ;
              for( int i = 0 ; i < V ; i++ ) {
                     if( graph[u][i] && dist[u] != INT_MAX && !sptset[i] && dist[u] + graph[u][i] < dist[i] ) 
                            dist[i] = dist[u] + graph[u][i] ; 
              }
       }
       printSolution( dist , V ) ; 
}

int main()
{
   /* Let us create the example graph discussed above */
   int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
  
    dijkstra(graph, 0);
  
    return 0;
}