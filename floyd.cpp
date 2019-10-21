#include <bits/stdc++.h>
#define V 4 
#define INF 99999
using namespace std ;

void printSolution( int graph[][V] ) {
       for( int i = 0 ; i < V ; i++ ) {
              for( int j = 0 ; j < V ; j++ ) {
                     if( graph[i][j] == INF ) cout << "INF\t"; 
                     else cout << graph[i][j] << "\t" ; 
              } cout << endl ;
       }
}

void floydWarshall( int graph[][V] ) {
       int arr[V][V] ; 
       for( int i = 0 ; i < V ; i++ ) {
              for( int j = 0 ; j < V ; j++ ) {
                     arr[i][j] = graph[i][j] ; 
              }
       }

       for( int k = 0 ; k < V ; k++ ) {
              for( int j = 0 ; j < V ; j++ ) {
                     for( int i = 0 ; i < V ; i++ ) {
                            if( arr[i][k] + arr[k][j] < arr[i][j] ) {
                                   arr[i][j] = arr[i][k] + arr[k][j] ; 
                            }
                     }
              }
       }
       printSolution(arr) ; 
}


int main()
{
    /* Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3           */
    int graph[V][V] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
 
    // Print the solution
    floydWarshall(graph);
    return 0;
}