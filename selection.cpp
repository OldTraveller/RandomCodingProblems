#include <bits/stdc++.h>
using namespace std ;

void selection( int arr[] , int n ) {
	int min_index ; 
	for( int i = 0 ; i < n - 1 ; i++ ) {
		int key = arr[i] ; 
		for( int j = i+1 ; j < n ; j++ ) {
			if( arr[j] < key ) {
				key = arr[j] ; 
				min_index = j ; 
			}
		}
		swap( arr[i] , arr[min_index] ) ; 
	}
}

int main() {
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 } ; 
	cout << "THE ARRAY IS : " << endl ; 
	selection( arr , 10 ) ; 
	for( int i = 0 ; i < 10 ; i++ ) cout << arr[i] << " " ; 
}
