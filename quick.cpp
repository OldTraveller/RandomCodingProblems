#include <bits/stdc++.h>
using namespace std ;

int partition( int arr[] , int low , int high ) {
	int i = low - 1 ; 
	int pivot = arr[high] ; 
	for( int j = low ; j <= high - 1 ; j++ ) {
		if( arr[j] < pivot ) {
			i++ ; 	
			swap( arr[i] , arr[j] ) ; 
		}
	}
	swap( arr[i+1] , arr[high] ) ; 
	return (i+1) ; 
}

void quick( int arr[] , int l , int r ) {
	if( l < r ) {
		int pi = partition( arr , l , r ) ;
		quick( arr , l , pi - 1 ) ; 
		quick( arr , pi + 1 , r ) ;
	}
}

void printArray( int arr[] , int n ) {
	for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ; 
	cout << endl ; 
}

int main() {
	int arr[10] ; 
	for( int i = 0 ; i < 10 ; i++ ) arr[i] = rand()%100 ; 
	printArray( arr , 10 ) ; 
	quick( arr , 0  , 9 ) ; 
	printArray( arr , 10 ) ; 
}
