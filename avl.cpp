#include <bits/stdc++.h>
#define NODE struct node*
using namespace std ;

struct node { 
       int data ; 
       struct node* left ; 
       struct node* right; 
       int height ; 
}; 

int height( NODE n ) {
       if( n == NULL ) return 0 ; 
       return n->height ; 
}

NODE newNode( int data ) {
       NODE newnode = new node ; 
       newnode -> data = data ; 
       newnode -> left = nullptr ; 
       newnode -> right = nullptr ; 
       newnode -> height = 1 ; 
       return newnode ; 
}

NODE RIGHT_ROTATE( NODE y ) {
       NODE x = y -> left ; 
       NODE T2 = x -> right ;

       x -> right = y ; 
       y -> left = T2 ; 

       y -> height = max( height( y -> left ) , height( y -> right )  ) + 1 ;
       x -> height = max( height ( x -> left ) , height( x -> right ) ) + 1 ; 
       return x ; 
}

NODE LEFT_ROTATE( NODE x ) {
       NODE y = x -> right ;
       NODE T2 = y -> left ; 

       y -> left = x ; 
       x -> right = T2 ;

       x -> height = max( height(x->left) , height(x->right) ) + 1; 
       y -> height = max( height( y->left ) , height(y->right)) + 1; 
       return y ; 
}

int getBalance( NODE n ) {
       if( n == nullptr ) return 0 ; 
       else return height( n -> left ) - height( n -> right ) ; 
}

NODE insert( NODE node , int data ) {
       if( node == nullptr ) return newNode(data) ; 
       if( data < node -> data ) 
              node -> left = insert( node -> left , data ) ; 
       else if ( data > node -> data ) 
              node -> right = insert( node -> right , data ) ; 
       else return node ; 

       node -> height = 1 + max( height( node -> left ) , height( node -> right ) ); 
       int balance = getBalance(node) ; 

       if( balance > 1 && data < node -> left -> data ) 
              return RIGHT_ROTATE(node) ; 
       if( balance < -1 && data > node -> right -> data ) 
              return LEFT_ROTATE(node) ; 
       if( balance > 1 && data > node -> left -> data ) {
              node -> left = LEFT_ROTATE(node -> left) ;
              return RIGHT_ROTATE(node) ; 
       }
       if( balance < -1 && data < node -> right -> data ) {
              node -> right = LEFT_ROTATE(node->right) ; 
              return LEFT_ROTATE(node) ; 
       }
       return node ; 
}

NODE minValueNode( NODE node ) {
       NODE current = node ; 
       while( current -> left != NULL ) 
              current = current -> left ;
       return current ; 
}

NODE deleteN( NODE root , int key ) {
       if( root == NULL ) return root ; 
       if( key < root -> data ) 
              root -> left = deleteN( root -> left , key ) ; 
       else if( key > root -> data ) 
              root -> right = deleteN( root -> right , key ) ; 
       else {
              if( root -> left == nullptr or root -> right == nullptr ) {
                     NODE temp = root -> left ? root -> left : root -> right ; 
                     if( temp == nullptr ) {
                            temp = root ;
                            root = nullptr ; 
                     } else {
                            *root = *temp ; 
                     }
                     free(temp) ;
              } else {
                     NODE temp = minValueNode(root->right) ; 
                     root -> data = temp -> data ; 
                     root -> right = deleteN( root -> right , temp -> data ) ; 
              }
       }
       if( root == nullptr ) return root ; 
       root -> height = 1 + max( height(root -> left) , height( root -> right ) ) ; 

       int balance = getBalance( root ) ; 
       if( balance > 1 && getBalance(root->left) >= 0 ) 
              return RIGHT_ROTATE(root) ; 
       if(balance > 1 && getBalance(root->left) < 0 ) {
              root -> left = LEFT_ROTATE(root->left) ; 
              return RIGHT_ROTATE(root) ; 
       }
       if( balance < -1 && getBalance(root->right) <= 0 ) 
              return LEFT_ROTATE(root) ; 
       if( balance < -1 && getBalance( root -> right ) > 0 ) {
              root -> right = RIGHT_ROTATE(root->right) ; 
              return LEFT_ROTATE(root) ; 
       }
       return root ; 
}

void inorder( NODE root ) {
       if( root ) {
              inorder( root -> left ) ; 
              cout << root -> data << " " ; 
              inorder( root -> right ) ; 
       }
}

int main()
{
  NODE root = NULL;
 
  /* Constructing tree given in the above figure */
    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 0);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, -1);
    root = insert(root, 1);
    root = insert(root, 2);
 
    /* The constructed AVL Tree would be
            9
           /  \
          1    10
        /  \     \
       0    5     11
      /    /  \
     -1   2    6
    */
 
    printf("Preorder traversal of the constructed AVL "
           "tree is \n");
    inorder(root);
 
    root = deleteN(root, 10);
 
    /* The AVL Tree after deletion of 10
            1
           /  \
          0    9
        /     /  \
       -1    5     11
           /  \
          2    6
    */
 
    printf("\nPreorder traversal after deletion of 10 \n");
    inorder(root);
 
    return 0;
}