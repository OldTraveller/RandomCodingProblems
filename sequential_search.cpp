#include <iostream>
using namespace std ;

int seq_search( int arr[] , int n , int key ) {
	for( int i = 0 ; i < n ; i++ ) if( arr[i] == key ) return i+1 ; 
	return -1 ; 
}

void printArray( int arr[] , int n ) {
	for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ;
	cout << endl ; 
}

int main() {
	int arr[20] ;
	int n = 20 ; 
	for( int i = 0 ; i < n ; i++ ) arr[i] = rand()%100 ; 
	cout << "ELEMENT TO BE FOUND : " << arr[5] << endl ; 
	int found = seq_search( arr , n , arr[5] ) ; 
	printArray( arr , n ) ; 
	if(found == -1 ) cout << "Element not found ! " << endl ; 
	else cout << "Element found at : " << found << endl ;
	return EXIT_SUCCESS ; 
}
