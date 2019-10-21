#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
      int data ;
      node* next ; 
};
typedef struct node* NODE ; 

class LinkedList {
      public : 
      NODE head ; 
      LinkedList( int data ) {
            head = new node ; 
            head -> data = data ;
            head -> next = NULL ; 
      }

      void ADD( int data ) {
            if( head == NULL ) {
                  head = new node ; 
                  head -> data = data ; 
                  head -> next = NULL ; 
            } else {
                  NODE newnode = new node ; 
                  newnode -> data = data ; 
                  newnode -> next = head ; 
                  head = newnode ; 
            }
      }

      bool detectCycle() ; 
      void show() ;

      void connect( int ) ; 
};

void LinkedList :: connect( int data ) {
      NODE newnode = new node ;
      newnode -> data = data ;
      newnode -> next = head ; 

}

bool LinkedList :: detectCycle() {
      NODE first =  head ; 
      NODE second = head ; 
      while( first != NULL && second != NULL && second -> next != NULL ) {
            first = first -> next ; 
            second = second -> next -> next ; 
            if( &first == &second ) return true ;
      } return false ; 
}

void LinkedList :: show() { 
      NODE temp = head ; 
      while ( temp != NULL ) {
            cout << temp -> data << " " ; temp = temp->next ; 
      }     cout << endl ; 
}

int main() {
      LinkedList ll(123) ; 
      ll.ADD(1) ; 
      ll.ADD(2) ; 
      ll.ADD(3) ;
      ll.ADD(4) ;

      ll.connect(1333) ; 


      if( ll.detectCycle()) cout << "Cycle Detected ! " << endl ; else cout << "NOT DETECTED ! " << endl ; 
      ll.show() ; 
}