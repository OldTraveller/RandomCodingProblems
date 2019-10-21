#include <iostream>
#include <algorithm>
using namespace std ;

bool BinarySearchRecursive( int arr[] , int l , int r , int key ) {
	if( l <= r ) {
		int mid = (l+r)/2 ; 
		if( arr[mid] == key ) return true ; 
		else if( arr[mid] > key ) return BinarySearchRecursive( arr , l , mid - 1 , key ) ;
		else return BinarySearchRecursive( arr , mid + 1 , r , key ) ; 
	}
	return false ; 
}
void printArray( int arr[] , int n ) {
	for( int i = 0  ; i < n ; i++ )  cout << arr[i] << " " ; 
	cout << endl ;
}

int main() {
	int arr[50] ;
	int n = 50 ; 
	for( int i = 0 ; i < n ; i++ ) arr[i] = rand()%50 ;
	sort( arr , arr + n ) ;
	int ch ;
	printArray( arr , n ) ; 
	while( cin >> ch && ch != 'q' ) {
		if(BinarySearchRecursive(arr,0,n,ch)) cout << "Element found ! " << endl ; 
		else cout << "ELement not found ! " << endl ; 
	}
}
