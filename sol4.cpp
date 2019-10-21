#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
	int n ; cin >> n ; 
	double arr[n] ; 
	for( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
	if( n < 3 ) cout << 0 << endl ; 
	else {
		double difference[n-1] ; 
		for( int i = 1 ; i < n ; i++ ) {
			difference[i-1] = arr[i] - arr[i-1] ; 
		}
		double sum_diff = 0 ; 
		for( int i = 0 ; i < n - 1 ; i++ ) {
			sum_diff += difference[i] ; 
		}
		double avg = sum_diff/(n-1) ; 
		double min_diff = abs(*min_element( difference , difference + n - 1 )) ; 
		double max_diff = abs(*max_element( difference , difference + n - 1 )) ; 

		if( avg < min_diff or  avg > max_diff ) {
			cout << -1 << endl ;
		}else {
			cout << ceil( (abs(max_diff)-abs(min_diff))/2 - avg ) << endl ; 
		}
	}
}

