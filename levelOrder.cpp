#include <bits/stdc++.h>
using namespace std ;

struct node {
	int data ;
	node* left ;
	node* right ;
};

node* NewNode ( int data ) {
	node* newnode = new node ;
	newnode -> data = data ;
	newnode -> left = nullptr ; 
	newnode -> right = nullptr ; 
	return newnode ;
}

int height ( node* root ) {
	if ( root == nullptr ) return 0 ;
	else return 1 + max ( height ( root -> left ) , height ( root -> right ) ) ; 
}

void printThatLevel ( node* root , int level ) {
	if ( root == NULL ) return ; 
	if ( level == 1 ) {
		cout << root -> data << " " ; 
		return ; 
	} else {
		printThatLevel ( root -> left , level - 1 ) ; 
		printThatLevel ( root -> right , level - 1 ) ;
	}
}

void printLevelOrder ( node* root ) {
	if ( root == NULL ) return ;
	else {
		int h = height ( root ) ; 
		for ( int i = 1 ; i <= h ; i++ ) {
			printThatLevel ( root , i ) ; 
		}
	}
}

int main() {
	node* root = NewNode ( 100 ) ;
	root -> left = NewNode ( 120 ) ;
	root -> right = NewNode ( 140 ) ;
	root -> left -> left = NewNode ( 200 ) ;
	root -> left -> right = NewNode ( 1000 ) ;
	cout << "The height of the tree is : " << height ( root ) << endl ;
	printLevelOrder ( root ) ;	
}
