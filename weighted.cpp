#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 
constexpr int SIZE = 100 ; 
int weights[SIZE][SIZE] ; 
int temp ;

struct Tree {
       vector<int> *tree ; 
       int num_nodes ; 
       bool *seen ; 
       Tree ( int n ) {
              num_nodes = n ; 
              seen = new bool[n+1] ; 
              tree = new vector<int>[n+1] ; 
       }
       void addEdge( int u , int v , int wt ) {
              tree[u].push_back(v) ; 
              tree[v].push_back(u) ; 
              weights[u][v] = wt ; 
       }
       void dfs ( int , int ) ; 
};



int ans = 0 ; 
void Tree :: dfs ( int V , int pV ) {
       seen[V] = true ; 
       temp += weights[V][pV] ; 
       ans = max ( ans , weights[V][pV] + temp ) ; 
       for ( auto it : tree[V] ) {
              if ( !seen[it] ) {
                     return dfs( it , V ) ; 
              }
              temp = temp - weights[V][pV] ;
              return dfs ( it , V ) ; 
       }
}

int main() {
       Tree moin(8) ; 
       moin.addEdge( 0 , 1 , 2 ) ; 
       moin.addEdge( 0 , 5 , 1 ) ; 
       moin.addEdge( 1 , 3 , 3 ) ; 
       moin.addEdge( 1 , 4 , 5 ) ; 
       moin.addEdge( 5 , 6 , 2 ) ; 
       moin.addEdge( 5 , 7 , 8 ) ;
       moin.dfs ( 0 , 1 ) ;
       cout << min ( ans , temp ) ; 
}