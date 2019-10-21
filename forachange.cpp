#include <bits/stdc++.h>
using ll = long long ; 
using namespace std ; 
constexpr ll PI = 3.141592654 ; 

int main() {
	map<int,string> mp ; 
	for( int i = 1 ; i <= 5 ; i++ ) {
		cout << "Enter the name : " << endl ; 
		string name ; cin >> name ; 
		mp[i] = name ; 
	}
	for( auto it : mp ) {
		cout << it.first << " " << it.second << endl ; 			
	}
}
