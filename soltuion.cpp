    #include <bits/stdc++.h>
    using namespace std;
     
    int findDivisors(int n)
    {
    	int i = 2;
    	while(i * i <= n) i++;
    	i--;
    	return i;
    }
     
    int main() {
    	int t; cin >> t;
    	while(t--) {
    		int n; cin >> n;
    		int x = findDivisors(n);
    		int y = n - x * x;
    		if(y <= x) {
    			for(int i = 0; i < x; i++) cout << "X";
    			for(int i = 0; i < x - y; i++) cout << "D";
    			if(y != 0 ) cout << "X";
    			for(int i = 0; i < y; i++) cout << "D";
    		}
    		else {
    			y -= x;
    			for(int i = 0; i < x + 1; i++) cout << "X";
    			for(int i = 0; i < x - y; i++) cout << "D";
    			cout << "X";
    			for(int i = 0; i < y; i++) cout << "D";
    		}
    		cout << "\n";
    	}
    	return 0;
    } 