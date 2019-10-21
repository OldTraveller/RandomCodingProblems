#include <iostream>
using namespace std ;

int parti( int arr[] , int low , int high ) {
	int pivot = arr[high] ;
	int j  = low - 1 ; 

	for( int i = low ; i <= high - 1 ; i++ ) {
		if( arr[i] <= pivot ) {
			j++ ; 
			swap( arr[i] , arr[j] ) ; 
		}
	}	
	swap( arr[j+1] , arr[high] ) ; 
	return j + 1 ;
}

void quick_sort( int arr[] , int l , int r ) {
	if( l < r ) {
		int pi = parti( arr , l , r ) ;	
		quick_sort( arr , l , pi - 1 ) ; 
		quick_sort( arr , pi + 1 , r ) ;
	}
}

void printArray( int arr[] , int n ) {
	for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ; cout << endl ; 
}

int main() {
	int arr[10] ;
	for( int i = 0 ; i < 10 ; i++ ) arr[i] = rand()%1000 ; 
	printArray( arr , 10 ) ;
	quick_sort( arr , 0 , 9 ) ; 
	printArray( arr , 10 ) ; 
	return 0 ; 
}
