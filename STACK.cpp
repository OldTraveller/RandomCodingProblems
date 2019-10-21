#include <bits/stdc++.h>
using namespace std ; 

struct node {
	int data ;
	struct node* next ; 
};

typedef struct node* NODE ;

NODE head = 0 ;

NODE INSERT( NODE head , int data ) {
	NODE newnode = new node ;
	newnode -> data = data ; 
	newnode -> next = head ; 
	head = newnode ; 
	return head ; 
}

NODE POP() {
	int data ; 
	data = head -> data ; 
	cout << "DATA TO BE DELETED IS : " << data << endl ; 
	NODE next_head = head -> next ;
	delete head ; 
	head = next_head ; 
	return head ;
}

void DISPLAY() {
	NODE temp = head ; 
	while( temp != NULL ) {
		cout << temp -> data << " " ;
		temp = temp -> next ;
	}
}

int main() {
	
	int choice ;
	int ch = 1 ; 
	cout << "STACK MENU : " << endl ;
	do {
		cout << "1. PUSH " << endl ; 
		cout << "2. POP " << endl ;
		cout << "3. DISPLAY " << endl ;
		cout << "ENTER CHOICE : " << endl ;
		cin >> choice ; 

		switch( choice ) {
			case 1 : int data ; 
				cout << "DATA TO BE INSERTED : " << endl ; 
				cin >> data ; 
				head = INSERT( head , data ) ; 
				break ;
			case 2 : head = POP() ; 
				break ;
			case 3 : cout << "LIST IS : " << endl ; 
				DISPLAY() ; 
				break ;
		}
	
	cout << "DO YOU WANT TO CONTINUE ? " << endl ;
	cin >> ch ; 
	} while( ch != 0 ) ;

}
