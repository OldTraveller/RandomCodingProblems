#include <bits/stdc++.h>
using namespace std;
using LL = int64_t; 

int main() {
	int t; 
	cin >> t;
	while (t--) {
		LL x, y, k; 
		cin >> x >> y >> k; 
		LL total = (x + y);  
		if ((total % k) == 0) {
			if ((total / k) % 2 == 1) cout << "Paja" << endl; 
			else cout << "Chef" << endl; 
		} else {
			if ((total / k) % 2 == 1) cout << "Paja" << endl; 
			else cout << "Chef" << endl; 
		}
	}
}
