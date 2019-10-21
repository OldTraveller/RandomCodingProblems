#include <bits/stdc++.h>
using namespace std ;

int partition( int arr[] , int low , int high ) {
       int pivot = arr[high] ; 
       int i = low - 1 ;
       for( int j = low ; j <= high - 1 ; j++ ) {
              if( arr[j] <= pivot ) {
                     i++ ; 
                     swap( arr[i] , arr[j] ) ; 
              }
       }
       swap( arr[i+1] , arr[high] ) ;
       return (i+1) ; 
}

void QuickSort( int arr[] , int l , int r ) {
       if( l < r ) {
              int pi = partition( arr , l , r ) ; 
              QuickSort( arr , l , pi - 1  ) ;
              QuickSort( arr , pi + 1 , r ) ; 
       }
}

void printArray( int arr[] , int n ) {
       for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " "  ;
       cout << endl ;
}

int main() {
       int arr[] = { 10,9,8,7,6,5,4,3,2,1 } ; 
       int n = sizeof(arr)/sizeof(int) ; 
       printArray( arr , n ) ;
       QuickSort( arr , 0 , n - 1 ) ; 
       printArray( arr , n ) ; 
}