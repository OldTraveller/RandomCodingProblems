#include <bits/stdc++.h>
using namespace std ;

class Graph { 
       int v ; 
       list <int> *adj ; 
       public : Graph( int ) ; 
                void addEdge( int , int ) ;
                void bfs( int ) ;
};

Graph :: Graph( int v ) {
       this -> v = v ; 
       adj = new list<int>[v] ;
}

void Graph :: addEdge( int u , int v ) {
       adj[u].push_back(v) ; 
}

void Graph :: bfs( int s ) {
       bool *visited = new bool[v] ; 
       memset( visited , false , sizeof visited ) ; 
       list <int> queue ; 
       queue.push_back(s) ; 
       visited[s] = true ; 
       while( !queue.empty() ) {
              int s = queue.front() ; 
              cout << s << " " ; 
              queue.pop_front() ;
              list <int> :: iterator it ; 
              for( it = adj[s].begin() ; it != adj[s].end() ; it++ ) {
                     if( !visited[*it] ) {
                            visited[*it] = true ; 
                            queue.push_back(*it) ; 
                     }
              }
       }

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
    g.bfs(2);
 
    return 0;
}