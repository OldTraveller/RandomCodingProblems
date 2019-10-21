#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

struct node {
      int value ;
      struct node* next ;
};


typedef struct node* NODE ;
NODE finds( int ) ;
NODE head = 0 ; 

// add the node at position
NODE add( int value , int data ) {
      NODE newnode = new node ;
      newnode -> value = data ; 
      NODE temp = finds( value ) ;
      if( temp == NULL ) {
            newnode -> next = head ; 
            head = newnode ;
            return head ; 
      }
      newnode -> next = temp -> next ;
      temp -> next = newnode ;
      return head ;
}

// returns pointer to the node !
NODE finds( int value ) {
      NODE temp = head ;
      while( temp->value != value ) {
            temp = temp -> next ; 
      }
      return temp ; 
}

// total count of nodes till the value is found !
int count( int value ) {
      NODE temp = new node ; 
      int count = 0 ; 
      while( temp->value != value ) {
            count++ ; 
      }
      return count ; 
}

// gives total size of the linked list 
int size_linked( NODE head ) {
      NODE temp = head ; 
      int count = 0 ;
      while( temp != NULL ) {
            count++ ; 
            temp = temp -> next ; 
      }
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ; 
      cin >> t ;
      
      while( t-- ) {
            int n ;
            cin >> n ; 

            int cnt = 0 ; 
            for( int i = 1 ; i <= n ; i++ ) {
                  int ele ;
                  cin >> ele ;
                  head = add( ele , i ) ; 
                  cnt += min( count(ele) , size_linked(head) - count(ele));
                  
            }     
            cout << cnt ;
            
      }
}