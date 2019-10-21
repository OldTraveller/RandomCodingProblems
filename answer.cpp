#include <bits/stdc++.h>
using namespace std ;

struct node {
	int data ;
	node* left ;
	node* right ;
};

void inorder ( node* ) ;
node* NewNode ( int data ) {
	node* newnode = new node ;
	newnode -> data = data ;
	newnode -> left = NULL ;
	newnode -> right = NULL ; 
	return newnode ;
}

int height ( node* root ) {
	if ( root == nullptr ) return 0 ; 
	else return 1 + max ( height ( root -> left ) , height ( root -> right ) ) ; 
}

void insertAtThatLevel ( node* root , int key ) {
	if ( root == nullptr ) return ; 
	else  {
		if ( root -> left == nullptr ) {
			root -> left = NewNode ( key ) ;			
			return ; 	
		} 
		if ( root -> right == nullptr ) {
			root -> right = NewNode ( key ) ;
			return ;  
		}
  		
		insertAtThatLevel ( root -> left , key ) ;
		insertAtThatLevel ( root -> right , key ) ;
	}
}

void inorder ( node* root ) {
	if ( root ) {
		inorder ( root -> left ) ;
		printf("%d " , root -> data ) ; 
		inorder ( root -> right ) ; 
	}
}

void clearoff ( node* root ) {
	if ( root ) {
		clearoff ( root -> left ) ; 
		clearoff ( root -> right ) ;
		cout << "deleted : " << root -> data << endl ;
		delete ( root ) ; 
	}
}

int main() {
	node* root = NewNode ( 1000 ) ; 
	root -> left = NewNode ( 100 ) ; 
	root -> right = NewNode ( 200 ) ;
	root -> left -> right = NewNode ( 400 ) ; 
	root -> right -> left = NewNode ( 900 ) ;

	inorder ( root ) ;
	cout << "Enter the data to be inserted : " << endl ;
	int data ; cin >> data ;
	insertAtThatLevel ( root , data ) ;
	cout << '\n' ;
	inorder ( root ) ; 
	clearoff( root ) ;
}
