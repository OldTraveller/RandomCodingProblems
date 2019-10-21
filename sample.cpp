#include <iostream>
using namespace std ; 
typedef long long ll ; 

int Sum( int a , int b ) { 
	 int sum = a + b ; 
	 return sum ; 
}

int main() { 
	 cout << " ENTER THE FIRST NUMBER : " << endl ; 
	 int first ; cin >> first ; 
	 cout << " ENTER THE SECOND NUMBER : " << endl ; 
	 int second ; cin >> second ; 
	 cout << " THE SUM IS : " << Sum( first , second ) << endl ; 
}

