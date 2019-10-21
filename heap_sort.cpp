#include <iostream>
using namespace std ;

void heapify( int arr[] , int n , int i ) {
	int maxi = i ; 
	int l = 2*i + 1 ;
	int r = 2*i + 2 ; 

	if( l < n and arr[l] > arr[maxi] ) maxi = l ; 
	if( r < n and arr[r] > arr[maxi] ) maxi = r ; 
	if( i != maxi ) {
		swap( arr[i] , arr[maxi] ) ; 
		heapify( arr , n , maxi ) ; 
	}
}

void heap_sort( int arr[] , int n ) {
	for( int i = n/2 - 1 ; i >= 0 ; i-- ) {
		heapify( arr , n , i ) ; 
	}

	for( int i = n - 1 ; i >= 0 ; i-- ) {
		swap( arr[0] , arr[i] ) ; 
		heapify( arr , i , 0  ) ; 
	}
}

void printArray( int arr[] , int n ) {
	for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ; cout << endl ; 
}

int main() {
	int arr[50] ;
	int n = 50 ; 
	for( int i = 0 ; i < n ; i++ ) arr[i] = rand()%100 ; 
	printArray( arr , n ) ;
	heap_sort( arr , n ) ;
	printArray( arr , n ) ;
}
