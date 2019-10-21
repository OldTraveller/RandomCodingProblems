#include <bits/stdc++.h> 
using namespace std ;

struct node {
	int data ; 
	node *left ; 
	node *right ; 
	node ( int d ) {
		data = d ; 
		left = right = nullptr ; 
	}
}; 

int mini , maxi ; 
int maxWidth( node *root , int dist ) {
	if ( root ) {
		mini = min ( dist , mini ) ;
		maxi = max ( dist , maxi ) ; 
		maxWidth( root -> left , dist - 1 ) ;	
		maxWidth( root -> right , dist + 1 ) ; 		
	}
}
int main() {
	node *root = new node ( 1 ) ; 
	root -> left = new node ( 2 ) ; 
	root -> right = new node ( 3 ) ;
	root -> left -> left = new node ( 4 ) ;
	root -> right -> right = new node ( 5 ) ;
	root -> right -> right -> right = new node ( 123 ) ; 
	maxWidth( root , 0 ) ;
	cout << maxi - ( mini ) << endl ; 
}
