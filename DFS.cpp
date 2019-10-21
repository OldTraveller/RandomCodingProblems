#include <bits/stdc++.h>
using namespace std ;

class Graph { 
       int v ; 
       list <int> *adj ; 
       void dfsUtil( int v , bool* ) ; 
       public : Graph( int ) ; 
                void addEdge( int , int ) ;
                void dfs( int ) ; 
};

Graph :: Graph( int v ) {
       this -> v = v ; 
       adj = new list<int>[v] ;
}

void Graph :: addEdge( int u , int v ) {
       adj[u].push_back(v) ; 
}

void Graph :: dfsUtil( int v , bool visited[] ) {
       visited[v] = true ; 
       cout << v << " " ;

       list<int> :: iterator it ; 
       for( it = adj[v].begin() ; it != adj[v].end() ; it++ ) {
              if( !visited[*it] ) 
                     dfsUtil( *it , visited ) ; 
       }
}

void Graph :: dfs( int v ) {
       bool *visited = new bool[v] ; 
       memset( visited , false , sizeof visited ) ; 
       dfsUtil( v , visited ) ; 
}

 
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(2);
 
    return 0;
}