#include <bits/stdc++.h>
using namespace std ;
using ll = long long ; 

int main() {
	unordered_map<char,ll> umap ; 
	for( int i = 1 ; i < 4 ; i++ ) {
		string name ; cin >> name ; 
		for( int i = 0 ; i < name.length() ; i++ ) {
			umap[name[i]]++ ; 
		}
		for( auto it : umap ) {
			cout << it.first << " " << it.second << endl ; 
		}
		cout << endl ; 	
		umap.clear() ; 
	}	
}
