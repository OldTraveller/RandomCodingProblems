#include <queue>
#include <iostream>
using namespace std ;

int main() {
	deque<string> s ; 
	s.push_front("ABHISHEK:") ; 
	for( string abc : s ) 
		cout << abc << endl ;
}
