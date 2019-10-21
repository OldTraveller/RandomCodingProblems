#include <bits/stdc++.h>
using namespace std ; 
using ll = long long ; 

int main() {
	ll n ; cin >> n ; 
	if( n == 0 ) cout << 0 << endl ; 
	else if( n&1 ) {
		cout << (n+1)/2 << endl ; 
	} else {
		cout << n + 1 << endl ; 
	}
}
