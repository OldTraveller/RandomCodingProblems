#include <iostream>
using namespace std ;

void selection_sort( int arr[] , int n ) {
	for( int i = 0 ; i < n - 1 ; i++ ) {
		int min_index = i ; 
		for( int j = i + 1 ; j < n ; j++ ) {
			if( arr[j] < arr[min_index] )
				min_index = j ;  
		}
		swap( arr[min_index] , arr[i] ) ; 
	}
}

void printArray( int arr[] , int n ) {
	for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " "  ; 
	cout << endl ; 
}

int main() {
	int arr[50] ;
	int n  = 50 ;
	for( int i = 0 ; i < n ; i++ ) arr[i] = rand()%100 ;  
	cout << "Before Sorting : " << endl ; 
	printArray( arr , n ) ; 
	cout << "After Sorting : " << endl ; 
	selection_sort( arr , n ) ; 
	printArray( arr , n ) ; 
	return 0 ; 
}
