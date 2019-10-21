#include <bits/stdc++.h>
using namespace std ;

int main() {
	FILE *fptr = fopen("sample.cpp" , "w" ) ; 
	if ( fptr == nullptr ) cout << "CANNOT OPEN FILE !! " << endl ;
	else {
		string toPrint = 
		(string)"#include <iostream>\n" + 
		"using namespace std ; \n" + 
		"typedef long long ll ; \n\n" + 
		"int Sum( int a , int b ) { \n" + 
		"\t int sum = a + b ; \n" + 
		"\t return sum ; \n" + 
		"}\n\n" + 
		"int main() { \n" + 
		"\t cout << \" ENTER THE FIRST NUMBER : \" << endl ; \n" + 
		"\t int first ; cin >> first ; \n" + 
		"\t cout << \" ENTER THE SECOND NUMBER : \" << endl ; \n" + 
		"\t int second ; cin >> second ; \n" + 
		"\t cout << \" THE SUM IS : \" << Sum( first , second ) << endl ; \n" + 
		"}\n\n" ; 
		const char* toFile = toPrint.c_str() ; 
		fprintf( fptr , toFile ) ; 
		cout << "File Generated Successfully !! " << endl ;
	}
}
