#include <bits/stdc++.h>
using namespace std ;

void solve ( int arr[][5] ) {
	int temp[5][5] ;
	int n = 5 ; 
	for ( int i = 0 ; i < n ; i++ ) {
		temp[i][0] = arr[i][0] ; temp[0][i] = arr[0][i] ; 
	}

	for ( int i = 1 ; i < n ; i++ ) {
		for ( int j = 1 ; j < n ; j++ ) {
			
			int value =  min ( temp[i-1][j-1] , min ( temp[i-1][j] , temp[i][j-1] ) ) ;
			if ( arr[i][j] == 1 ) {
				temp[i][j] = 1 + value ;  
			} else {
				temp[i][j] = value ; 
			}
		}
	}
	int count = -1  ; 
	pair <int,int> co ; 
	for ( int i = 0 ; i < n ; i++ ) for ( int j = 0 ; j < n ; j++ ) {
		 if ( temp[i][j] > count ) {
			co.first = i ; co.second = j ; 
			count = temp[i][j] ; 
		}
	}
	cout << "The maximum square is : " << count << " X " << count << " dimension long ! " << endl ; 
	cout << "The corner points are : " << endl ;
	cout << " ( " << co.first << " , " << co.second << " ) " << endl ; 
	cout << " ( " << co.first - count << " , " << co.second - count << " ) " << endl ; 
	cout << " ( " << co.first - count << " , " << co.second << " ) " << endl ;
	cout << " ( " << co.first << " , " << co.second - count << " ) " << endl ;
}
int main() {
	int arr[][5] = {
		{0,0,1,1,1} ,
		{0,1,1,1,1} ,
		{0,1,1,1,1} , 
		{0,1,1,1,1},
		{0,1,1,1,1}
	};
	solve ( arr ) ; 
}
