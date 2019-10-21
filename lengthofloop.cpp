#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
      int data ;
      struct node* next ;
};

typedef struct node* NODE ;
NODE head = 0 ;

int countNodes( NODE start ) {
      int res = 1 ; 
      NODE temp = start ; 
      while( temp -> next != start ) {
            res++ ; 
            temp = temp -> next ; 
      }
      return res ;
}

int detectNCount( NODE head ) {
      NODE first = head ;
      NODE second = head ; 
      while( first && second && second -> next ) {
            first = first -> next ; 
            second = second -> next -> next ; 
            if( first == second ) {
                  return countNodes(first) ; 
            }
      }
}

NODE Node( int data ){
      NODE newnode = new node ; 
      newnode -> data = data ; 
      newnode -> next = nullptr ; 
      return newnode ; 
}

int main() {
      head = Node(123) ; 
      NODE node1 = Node(1) ; 
      NODE node2 = Node(2) ;
      NODE node3 = Node(3) ;
      NODE node4 = Node(4) ;
      NODE node5 = Node(5) ;

      head -> next = node1 ; 
      node1 -> next = node2 ; 
      node2 -> next = node3 ; 
      node3 -> next = node4 ; 
      node4 -> next = node5 ; 
      node4 -> next = node1 ; 

      // int count = detectNCount(head)  ; 
      // cout << count << endl ;

}