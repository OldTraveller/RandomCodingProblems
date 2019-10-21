#include <bits/stdc++.h>
#define V 9 
using namespace std ;

int minDistance( int dist[] , bool sptSet[] ) {
	int mins = INT_MAX ; 
	int min_index ; 
	for( int v = 0 ; v < V ; v++ ) {
		if( sptSet[v] == false and dist[v] < mins ) {
			mins = dist[v] , min_index = v  ;
		}
	}
	return min_index ; 
}	

int printSolution( int dist[] , int n ) {
	cout << "Vertex and distance from the source " << endl ; 
	for( int i = 0 ; i < V ; i++ ) cout << i << " " <<  dist[i] << " " << endl ; 
}

void dijkstra( int graph[V][V] , int src ) {
	int dist[V] ; 
	bool sptSet[V] ; 
	
	for( int v = 0 ; v < V ; v++ ) {
		sptSet[v] = false ; 
		dist[v] = INT_MAX ;
	}

	dist[src] = 0 ; 
	for( int counts = 0 ; counts < V - 1 ; counts++ ) {
		int u  = minDistance( dist , sptSet ) ; 
		sptSet[u] = true ; 
		for( int v = 0 ; v < V ; v++ ) {
			if( !sptSet[v] and graph[u][v] and dist[u] != INT_MAX 
				and dist[u] + graph[u][v] < dist[v] ) 
			dist[v] = dist[u] + graph[u][v] ; 
		}
	}
	printSolution( dist , V ) ; 
}

int main() {
	int graph[V][V] ; 
	cout << "ENTER THE " << V << " X " << V << " GRAPH ! " << endl ; 
	for( int i = 0 ; i < V ; i++ ) 
		for( int j = 0 ; j < V ; j++ ) 
			cin >> graph[i][j] ; 

	dijkstra( graph , 0 ) ; 
	return 0 ; 
}
