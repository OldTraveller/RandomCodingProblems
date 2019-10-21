#include <bits/stdc++.h>
#define NODE struct node*
using namespace std ;
using ll = long long ;

struct node {
       int data ;
       struct node* left ; 
       struct node* right ; 
};

NODE NewNode( int data ) {
       NODE newnode = new node ; 
       newnode -> data = data ; 
       newnode -> left = newnode -> right = nullptr ; 
       return newnode ; 
}

void inorder( NODE node ) {
       if(node) {
              inorder(node->left) ; 
              cout << node -> data << " " ; 
              inorder(node->right) ; 
       }
}
void preorder( NODE node ) {
       if(node) {
              cout << node -> data << " " ; 
              preorder(node->left) ; 
              preorder(node->right) ; 
       }
}
void postorder( NODE node ) {
       if(node) {
              postorder(node->left) ; 
              postorder(node->right) ; 
              cout << node -> data << " " ; 
       }
}

bool is_rchild( NODE* node ) {
       cout << "Want to create rchild of " << (*node) -> data << endl ; 
       int ch ; cin >> ch ; 
       if( ch == 1 ) return true ; return false ; 
}

bool is_lchild( NODE* node ){
       cout << "Want to create lchild of : " << (*node) -> data << endl ;
       int ch ; cin >> ch ; 
       if( ch == 1 ) return true ; return false ; 
}

void create(NODE* Node) {
       NODE temp ; 
       if( is_lchild(Node)) {
              cout << "Enter the data for the lchild : " ; int ele ; cin >> ele ; 
              (*Node) -> left = NewNode(ele) ;  
              temp = (*Node) -> left ; 
              create(&temp) ;
       } else (*Node) -> left = nullptr ; 

       if( is_rchild(Node)) {
              cout << "Enter the data for the rchild : " ; int ele ; cin >> ele ; 
              (*Node) -> right = NewNode(ele) ;  
              temp = (*Node) -> right ; 
              create(&temp) ;
       } else (*Node) -> right = nullptr ; 
}

int main() {
       cout << "Enter the data for the root : " << endl ; 
       int ele;  cin >> ele ;
       NODE root = NewNode(ele) ; 
       create(&root) ; 
       cout << "INORDER : " << endl ; 
       inorder(root) ; cout << endl ; 
       cout << "PREORDER : " << endl ; 
       preorder(root) ; cout << endl ; 
       cout << "POSTORDER : " << endl ; 
       postorder(root) ; 
}