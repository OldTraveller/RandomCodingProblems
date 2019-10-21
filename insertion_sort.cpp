#include <bits/stdc++.h>
using namespace std ;

void insertion_sort( int arr[] , int n ) {
       int i , key , j ; 
       for( int i = 1 ; i < n ; i++ ) {
              key = arr[i] ; 
              j = i - 1; 
              while( j >= 0 && arr[j] > key ) {
                     swap( arr[j] , arr[j+1] ) ; 
                     j-- ; 
              }
              arr[j+1] = key ; 
       }
}

void printArray( int arr[] , int n ) {
       for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ; 
       cout << endl ;
}

int main() {
       int arr[10] ; 
       int n = 10 ; 
       for( int i = 0 ; i < n ; i++ ) arr[i] = rand()%100 ; 
       cout << "Before Sorting : " << endl ; 
       printArray( arr , n ) ; 
       cout << "After Sorting : " << endl ; 
       insertion_sort( arr , n  ) ; 
       printArray( arr , n ) ;
}