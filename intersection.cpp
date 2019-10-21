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


void printList( NODE head ) {
      NODE temp = head ;
      while ( temp ) {
            cout << temp -> data << " " ; temp = temp -> next ;
      }
}

vector<int> elements( NODE head ) {
      NODE temp = head ; 
      vector<int> vec ; 
      while(temp) {
            vec.push_back(temp->data) ; temp = temp -> next ; 
      }
      return vec ; 
}

void deleteE( NODE head ) {
      while( head ) {
            NODE temp = head ; 
            head = head -> next ; 
            delete temp ; 
      } cout << "CLEARED MEMEORY ! " << endl ; 
}


int main() {
      vector<int> first ;
      vector<int> second ;

      NODE head1(Node(1)) ; 
      NODE head2(Node(2)) ;

      NODE node1 = Node(2) ; 
      NODE node2 = Node(3) ; 
      NODE node3 = Node(4) ; 

      head1 -> next = node1 ; 
      node1 -> next = node2 ; 
      node2 -> next = node3 ; 

      NODE node4 = Node(2) ; 
      NODE node5= Node(3) ; 
      head2 -> next = node4; 
      head2 -> next = node5 ; 


      first = elements(head1) ; 
      second = elements(head2) ;

      vector<int> inter( first.size() + second.size() )  ; 
      auto it = set_intersection( first.begin() , first.end() , second.begin() , second.end() , inter.begin() ) ;
      inter.shrink_to_fit() ; 
      for( auto br : inter ) {
            if(br) cout << br << " " ;
      }

      deleteE(head1) ;       
      deleteE(head2) ;       

}