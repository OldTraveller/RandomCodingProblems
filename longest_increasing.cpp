#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

vector<int> s ;

void solve( int *arr , int size ) {
      
      int max_till_now = INT_MIN ; 
      for( int i = 0 ; i < size ; i++ ) {
            int maximum = arr[i] ; 
            vector<int> vec ;
            vec.push_back(maximum) ; 
            for( int j = i+1 ; j < size ; j++ ) {
                  if( arr[j] > maximum ) {
                        maximum = arr[j] ; 
                        vec.push_back(maximum) ; 
                  }
            }

            if( (int)vec.size() >= max_till_now ) {
                  max_till_now = vec.size() ; 
            }
      }

      cout << "THE MAXIMUM INCREASING SUB IS : " << max_till_now << " SIZE LONG ! " ; 
}

int main() {
      int arr[] = { 20,10,15,30,40,35,50,60 }  ;
      cout << "THE ARRAY IS : "<< endl ; 
      for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++ ) {
            cout << arr[i] << " " ;
      }
      cout << endl ;
      solve( arr , sizeof(arr)/sizeof(int) ) ;
}