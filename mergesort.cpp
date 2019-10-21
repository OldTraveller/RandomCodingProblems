#include <bits/stdc++.h>
using namespace std ;

void merge( int arr[] , int l , int m , int r ) {
       int n1 = m - l + 1 ;
       int n2 = r - m ;

       int L[n1] , R[n2] ; 
       for( int i = 0 ; i < n1 ; i++ ) L[i] = arr[i+l] ; 
       for( int j = 0 ; j < n2 ; j++ ) R[j] = arr[m+1+j] ;
       int i = 0 ; 
       int j = 0 ; 
       int k = l ;

       while( i < n1 and j < n2 ) {
              if( L[i] <= R[j] ) {
                     arr[k] = L[i] ; 
                     i++ ; k++ ; 
              } else {
                     arr[k] = R[j] ; 
                     k++ ; j++ ; 
              }
       }

       while( i < n1 ) arr[k] = L[i] , i++ , k++ ; 
       while( j < n2 ) arr[k] = R[j] , j++ , k++ ;
}

void merge_sort( int arr[] , int l , int r ) {
       if( l < r ) {
              int m = (l+r)/2 ;
              merge_sort( arr , l , m ) ; 
              merge_sort( arr , m + 1 , r ) ; 
              merge( arr , l , m , r ) ; 
       }
}

void printArray( int arr[] , int n ) {
       for( int i = 0 ; i < n ; i++ ) cout << arr[i] << " " ; 
       cout << endl;  
}

int main() {
       int arr[50] ; 
       int n = 50 ; 
       for( int i = 0; i < n ; i++ ) arr[i] = rand()%100 ; 
       printArray( arr , n ) ; 
       cout << "After Sorting : " << endl ; 
       merge_sort( arr , 0 , n - 1  ) ; 
       printArray( arr , n ) ; 
}