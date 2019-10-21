#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

void sortit( int* arr , int size ) {
    for( int i = 0 ; i < size ; i++ ) {
        while( i != (arr[i] - 1) ) {
            swap( arr[i] , arr[arr[i]-1] ) ;
        }
    }
}

int main() {
    int arr[] = { 10,9,8,7,6,5,4,3,2,1 } ;
    printf("Elements before sorting are : " ) ; 
    for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++ ) {
        printf("%d " , arr[i] ) ;
    }
    cout << endl ; 

    sortit( arr , sizeof( arr )/sizeof(int) ) ;
    
    printf("Elements after sorting are : " ) ; 
    for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++ ) {
        printf("%d " , arr[i] ) ;
    }
    cout << endl ;  
}