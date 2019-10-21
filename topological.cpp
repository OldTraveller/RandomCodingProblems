#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

class Graph { 
       int v ; 
       list <int> *adj ; 
       void topologicalUtil( int v , bool* , stack<int> & ) ; 
       public : Graph( int ) ; 
                void addEdge( int , int ) ;
                void topological() ; 
};

Graph :: Graph( int v ) {
       this -> v = v ; 
       adj = new list<int>[v] ;
}

void Graph :: addEdge( int u , int v ) {
       adj[u].push_back(v) ; 
}


void Graph :: topologicalUtil( int v , bool visited[] , stack<int> &Stack) {
       visited[v] = true ;

       list<int> :: iterator it ;
       for( it = adj[v].begin() ; it != adj[v].end() ; it++ ) {
              if( !visited[*it] ) {
                     topologicalUtil( *it , visited , Stack ) ; 
              }
       }
       Stack.push(v) ; 
}

void Graph :: topological() {
       stack<int> Stack ;

       bool *visited = new bool[v] ; 
       memset( visited , false , sizeof visited ) ; 
       for( int i = 0 ; i < v ; i++ ) {
              if( !visited[i] ) topologicalUtil( i , visited , Stack ) ; 
       }
       while( !Stack.empty() ) {
              cout << Stack.top() << " " ;
              Stack.pop() ; 
       }
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
 
    cout << "Following is a Topological Sort of the given graph \n";
    g.topological();
 
    return 0;
}