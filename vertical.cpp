#include <bits/stdc++.h>
using namespace std ;
map<int,int> counts ; 

struct node {
	int data ; 
	node *left , *right;  
	node ( int data ) {
       	    this -> data = data ; 
     	    left = right = nullptr ; 		  
	}
}; 

void dfs ( node* root , int dist ) {
	if ( root != nullptr ) {
		counts[dist] += root -> data ; 
		dfs ( root -> left , dist - 1 ) ;	
		dfs ( root -> right , dist + 1 ) ; 
	}
}	

int main() {
	node *root = new node(1) ; 
	root -> left = new node( 2 ) ; 
	root -> right = new node( 3 ) ; 
	root -> left -> left = new node (4) ; 
	root -> left -> right = new node (5) ; 
	root -> right -> left = new node(7) ; 
	root -> right -> right = new node(6) ; 
	dfs ( root , 0 ) ; 
	for ( auto it : counts ) cout << it.second << endl ;
}
