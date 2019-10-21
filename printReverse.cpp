#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
      int data ;
      struct node* next; 
};
typedef struct node* NODE ;
NODE head = nullptr ;

NODE NewNode ( int data ) {
      NODE newnode = new node ;
      newnode -> data = data ;
      newnode -> next = nullptr ; 
      return newnode ; 
}

void addFront( int data , NODE* head ) {
      NODE newnode = NewNode( data ) ; 
      newnode -> next = *head ; 
      *head = newnode ; 
}

void printRecursive( NODE head ) {
      if ( head == nullptr ) return ; 
      printRecursive( head -> next ) ; 
      cout << head -> data << " " ; 
}

int main()
{
    // Let us create linked list 1->2->3->4
    NODE head = NewNode( 0 ) ;
    addFront( 1 , &head ) ; 
    addFront( 2 , &head ) ; 
    addFront( 3 , &head ) ; 
    addFront( 4 , &head ) ; 
    printRecursive(head);
    return 0;
}