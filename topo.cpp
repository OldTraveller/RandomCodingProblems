#include <bits/stdc++.h>
using namespace std ;

class Graph {
       int v ; 
       list<int> *adj ; 
       void topologicalutil( int v , bool visited[] , stack<int> &Stack)  ;
       public : Graph( int v ) ;
              void addEdge( int , int ) ; 
              void topologicalSort() ; 
};

Graph :: Graph( int v ) {
       this -> v = v  ;
       adj = new list<int>[v] ; 
}

void Graph :: addEdge( int u , int v ) {
       adj[u].push_back(v) ; 
}

void Graph :: topologicalutil( int v , bool visited[] , stack<int> &Stack ) {
       visited[v] = true ; 
       list <int> :: iterator it ; 
       for( it = adj[v].begin() ; it != adj[v].end() ; it++ ) {
              topologicalutil( *it , visited , Stack ) ; 
       }
       Stack.push(v) ; 
}

void Graph :: topologicalSort() {
       stack<int> Stack ; 
       bool *visited = new bool[v] ; 
       memset( visited , false , sizeof visited ) ; 
       for( int i = 0 ; i < v ; i++ ) {
              if( !visited[i] ) {
                     topologicalutil( i , visited , Stack ) ; 
              }
       }

       while( Stack.empty() == false ) {
              cout << Stack.top() << endl ; 
              Stack.pop() ; 
       }
}

int main() {
       
}