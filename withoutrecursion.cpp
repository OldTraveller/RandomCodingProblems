#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
       int data ; 
       node* left ; 
       node* right ;
       node ( int d ) {
              data = d ; 
              left = right = nullptr ; 
       }
};

vector <int> inorder_succ ; 

void inorder ( node* root ) {
       if ( root == nullptr ) return ; 
       stack < node* > stck ; 
       
       node* curr = root ; 
       while ( curr != nullptr or ! stck.empty() ) {
              while ( curr != NULL ) {
                     stck.push ( curr ) ; 
                     curr = curr -> left ; 
              }
              curr = stck.top() ; 
              stck.pop() ;
              cout << curr -> data << " " ;
              inorder_succ.push_back ( curr -> data ) ; 
              curr = curr -> right ; 
       }
}

int main() {
       node* root = new node ( 1 ) ; 
       root -> left = new node ( 2 ) ; 
       root -> right = new node ( 3 ) ; 
       root -> left -> left = new node ( 4 ) ;
       root -> left -> right = new node ( 5 ) ;

       inorder ( root ) ;     
       cout << "which element ? " << endl ; int ele ; cin >> ele ;
       for ( int i = 0 ; i < inorder_succ.size() - 1 ; i++ ) {
              if ( inorder_succ.at(i) == ele ) {
                     cout << inorder_succ.at(i+1) ; 
                     break ; 
              }
       }
}