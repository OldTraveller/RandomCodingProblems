#include <bits/stdc++.h>
using namespace std ;

int main() {
	int n ; cin >> n ; 
	int arr[n] ; 
	for( int i = 0 ; i < n ; i++ ) cin >> arr[i] ; 
	set<int> ele ; 		
	vector<int> answer ;
	for( int i = n - 1 ; i >= 0 ; i-- ) {
		if( ele.find(arr[i]) == ele.end() ) answer.push_back(arr[i]) ; 
		ele.insert(arr[i]) ; 
	}
	cout << ele.size() << endl ;
	for( int i = answer.size() - 1 ; i >= 0 ; i-- ) cout << answer[i] << " " ; 
}
