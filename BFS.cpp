#include <bits/stdc++.h>
using namespace std ; 

class Graph {
	int v ; 
	list <int> *adj ;
	public : 
		Graph( int ) ;
		void addEdge( int , int ) ; 
		void bfs( int s ) ; 
};

Graph :: Graph( int v ) {
	this -> v = v ; 
	adj = new list <int>[v] ; 
}

void Graph :: addEdge( int u , int v ) {
	adj[u].push_back(v) ; 
}

void Graph :: bfs( int s ) {
	bool *visited = new bool[v] ; 
	memset( visited , false , sizeof visited ) ; 
	visited[s] = true ;
	list<int> queue ; 
	queue.push_back(s) ; 
	
	list <int> :: iterator it  ; 
	while( !queue.empty() ) {
		int s = queue.front() ; 
		cout << s << " "  ; 
		queue.pop_front() ; 
		for( it = adj[s].begin() ; it != adj[s].end() ; it++ ) {
			if( !visited[*it] ) {
				queue.push_back(*it) ; 
				visited[*it] = true ; 
			}
		}
	}
}

int main() {
	Graph g(4) ;
	g.addEdge( 0 , 1 ) ; 
	
	g.addEdge( 0 , 2 ) ; 
	g.addEdge( 1 , 2 ) ; 
	g.addEdge( 2 , 0 ) ; 
	g.addEdge( 2 , 3 ) ; 
	g.addEdge( 3 , 3 ) ; 
	cout << "Following is the  dfs : " << endl ; 
	g.bfs(2) ; 
	return 0  ;
}
