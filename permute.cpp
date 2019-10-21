#include <iostream>
#include <algorithm>
using namespace std ; 

int main() {
	int arr[] = { 1 , 2 , 3 ,4 } ; 
 	int count = 0 ; 
	
	do {
 	cout <<	arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3]  << endl ; 
	count++ ; 	
	} while( next_permutation( arr , arr + 4 ) ) ; 

	cout << '\n' ;
	cout << "TOTAL PERMUTATIONS : " << count << endl ; 
	return 0 ; 
}
