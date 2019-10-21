#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

bool isSubsetSum( int arr[] , int n , int sum ) {
       if( sum == 0 ) 
              return true ;
       if( n == 0 && sum > 0 ) 
              return false ;
       if( arr[n-1] > sum ) {
              return isSubsetSum( arr , n - 1 , sum  ) ; 
       }
       
       return isSubsetSum( arr , n-1 , sum )|| isSubsetSum( arr , n-1 , sum - arr[n-1] ) ;
}

int main() {
       cout << "ENTER THE NUMBER OF ELEMENTS : " ;
       int n ;
       cin >> n ; 

       int arr[n] ;  
       cout << "ENTER THE ELEMENTS ONE BY ONE : " ;
       for( int i = 0 ; i < n ; i++ ) 
              cin >> arr[i] ; 

       cout << "WHAT SUBSET SUM ? " ;
       int sum ; 
       cin >> sum ; 

       cout << "THE SUM " << sum << " IS : " << (( isSubsetSum( arr , n , sum ) ) ? "PRESENT " : "NOT PRESENT ! ") ;
}