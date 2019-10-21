#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
 
int ans = INT_MIN ; 

struct Tree {
       int root ;
       int numNodes ; 
       bool *seen ; 
       vector<int> *tree ; 
       void dfs ( int , int ) ;
       Tree ( int n ) {
              numNodes = n ;
              seen = new bool[n+1] ; 
              tree = new vector<int>[n+1] ; 
       }
       void addEdge( int , int , int ) ; 
};

void Tree :: addEdge ( int u , int v , int wt ) {
       tree[u].push_back(v) ; 
       tree[v].push_back(u) ; 
       weight[{u,v}] = wt ; 
       weight[{v,u}] = wt ; 
}

void Tree :: dfs ( int V , int pV ) {
       seen[V] = true ;
       ans = min ( ans , weight[{V,pV}] + ans ) ; 
       for ( auto it : tree[V] ) {
              if ( !seen[it] ) return dfs ( it , V ) ; 
       }
}

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       cout << "Enter the number of Nodes : " << endl ;
       int n ; cin >> n ; 
       Tree moin(n+1) ;
       moin.addEdge( 0 , 1 , 0 ) ; 
       moin.addEdge( 1 , 2 , 1 ) ; 
       moin.addEdge( 2 , 3 , 5 ) ; 
       moin.addEdge( 2 , 4 , 3 ) ; 
       moin.addEdge( 1 , 5 , 2 ) ; 
       moin.addEdge( 5 , 6 , 4 ) ; 
       moin.addEdge( 5 , 7 , 1 ) ; 
       moin.dfs( 0 , 1 ) ; 
       cout << ans << endl ;
}