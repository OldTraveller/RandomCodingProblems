#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;


struct node {
       /* data */
       int data ; 
       node* left ; 
       node* right ; 
       node ( int data ) {
              this -> data = data ; 
              left = right = nullptr ; 
       }
};

int Height ( node* root ) {
       if ( root == nullptr ) return 0 ; 
       return 1 + max ( Height ( root -> left ) , Height ( root -> right ) ) ;
}

void printThatLevel ( node* root , int level ) {
       if ( root == nullptr or level == 0 ) return ; 
       else if ( level == 1 ) {
              cout << root -> data << " " ; 
       } else {
              printThatLevel ( root -> left , level - 1 ) ; 
              printThatLevel ( root -> right , level - 1 ) ; 
       }
}

void levelorder ( node* root ) {
       if ( root == nullptr ) return ;
       else {
              int h = Height ( root ) ; 
              for ( int i = 1 ; i <= h ; i++ ) {
                     printThatLevel ( root , i ) ; 
              }
       }
}

int main() {
       node* root = new node( 10 ) ; 
       root -> left = new node ( 11 ) ; 
       root -> right = new node ( 12 ) ; 
       root -> left -> left = new node ( 13 ) ; 

       levelorder ( root ) ; 
}