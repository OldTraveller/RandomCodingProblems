#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
      int data ; 
      struct node* next ;
};

typedef struct node* NODE ; 
NODE head = NULL ; 

NODE Node( int data ){
      NODE newnode = new node ;
      newnode -> data = data ; 
      newnode -> next = NULL ; 
      return newnode ; 
}

void swapNodes( NODE head ) {
      NODE first = head ; 
      if( !head ) return ; 
      NODE second = first -> next ; 
      if( !second ) return ; 
      while( first and second ) {
            swap( first -> data , second -> data ) ;
            if( !(second->next) ) return ; 
            else first = second -> next ; 
            if( !(first -> next) ) return ; 
            else second = first -> next ; 
      }
}

void deleteE( NODE head ) {
      while( head ) {
            NODE temp = head ; 
            head = head -> next ; 
            delete temp ; 
      } cout << "CLEARED MEMEORY ! " << endl ; 
}

void printList( NODE head ) {
      NODE temp = head ;
      while ( temp ) {
            cout << temp -> data << " " ; temp = temp -> next ;
      }
}

int main() {
      head = Node(1) ; 
      head -> next = Node(2) ; 
      head -> next -> next = Node(3) ; 
      head -> next -> next -> next = Node(4) ; 
      head -> next -> next -> next -> next = Node(5) ; 
      head -> next -> next -> next -> next -> next  = Node(6) ; 

      printList(head) ; cout << endl; 
      swapNodes(head) ;
      printList(head) ; 

      // deleteE(head) ; 
}