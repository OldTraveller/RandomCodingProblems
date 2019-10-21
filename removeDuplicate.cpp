#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
      int data ;
      struct node* next ;
};

typedef struct node* NODE ;
NODE head = 0 ;

NODE Node( int data ){
      NODE newnode = new node ; 
      newnode -> data = data ; 
      newnode -> next = nullptr ; 
      return newnode ; 
}

void removeDuplicates( NODE head ) {
      unordered_set<int> s ; 
      NODE curr = head ; 
      NODE prev = nullptr ; 

      while( curr != nullptr ) {
            if( s.find( curr -> data ) != s.end() ) {
                  prev -> next = curr -> next ;
                  delete curr ;
            } else {
                  s.insert(curr -> data ) ; 
                  prev = curr ;
            }
            curr = prev -> next ; 
      }
}

int size(NODE head) {
      NODE temp = head ; 
      int s = 0 ; 
      while( temp != nullptr ) {
            s++ ; temp = temp -> next ;
      }
      return s ; 
}

int main() {
      head = Node(123) ; 
      NODE node1 = Node(1) ; 
      NODE node2 = Node(23) ;
      NODE node3 = Node(3) ;
      NODE node4 = Node(23) ;
      NODE node5 = Node(3) ;


      head -> next = node1 ; 
      node1 -> next = node2 ; 
      node2 -> next = node3 ; 
      node3 -> next = node4 ; 
      node4 -> next = node5 ; 
      cout << "THE SIZE OF THE LIST IS : " << size(head) << endl ; 
      removeDuplicates(head) ;
      cout << "THE SIZE OF THE LIST IS : " << size(head) << endl ; 




}