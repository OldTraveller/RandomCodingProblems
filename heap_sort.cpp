#include <bits/stdc++.h>
using namespace std ;

void heapify( int arr[] , int n , int i ) {
	int lar = i ; 
	int l = 2*i + 1  ; 
	int r = 2*i + 2 ;

	if( l < n and arr[l] > arr[lar] ) lar = l ; 
	if( r < n and arr[r] > arr[lar] ) lar = r ;

	if( i != lar ) {
		swap( arr[lar] , arr[i] ) ; 
		heapify( arr , n , lar ) ; 
	}
}

void heap_sort( int arr[] , int n ) {
	for( int i = n/2 - 1 ; i >= 0 ; i-- ) 
		heapify( arr , n , i ) ;
	for( int i = n-1 ; i >= 0 ; i-- ) {
		swap( arr[0] , arr[i] ) ;
		heapify( arr , i , 0 ) ; 
	}
}

void printArray( int arr[] , int n ) {
	for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ; 
	cout << endl ; 
}

int main() {
	cout << "IMPLEMENTATION OF HEAP SORT " << endl ;
	int arr[10] ; 
	int n = 10 ; 
	for( int i = 0 ; i < n ; i++ ) arr[i] = rand()%100 ; 
	cout << "THE ARRAY IS : " << endl ; 
	printArray( arr , n ) ; 
	cout << "AFTER THE SORTING : " << endl ;  
	heap_sort( arr , n ) ; 
	printArray( arr , n ) ; 
}
