#include <bits/stdc++.h>
using namespace std;
using LL = int64_t; 
 
int main() {
	int t; 
	cin >> t;
	while (t--) {
		LL n; 
		cin >> n; 
		vector<LL> oddChef; 
		vector<LL> evenChef; 
		vector<LL> oddCheffete;
		vector<LL> evenCheffete; 
		for (int i = 0; i < n; i++) {
			LL chef; cin >> chef; 
			if (chef & 1) oddChef.push_back(chef); 
			else evenChef.push_back(chef); 
		}
		for (int i = 0; i < n; i++) {
			LL cheffete; cin >> cheffete; 
			if (cheffete & 1) oddCheffete.push_back(cheffete); 
			else evenCheffete.push_back(cheffete); 
		}
		sort(oddChef.begin(), oddChef.end()); 
		sort(evenChef.begin(), evenChef.end()); 
		sort(oddCheffete.begin(), oddCheffete.end(), greater<LL>()); 
		sort(evenCheffete.begin(), evenCheffete.end(), greater<LL>()) ;
		LL sum = 0L; 
		int minPairOdd = min(oddChef.size(), oddCheffete.size()); 
		int minPairEven = min(evenCheffete.size(), evenChef.size()); 
		for (int i = 0; i < minPairOdd; i++) {
			sum += (oddChef[i] + oddCheffete[i])/2; 
		}
		for (int i = 0; i < minPairEven; i++) {
			sum += (evenChef[i] + evenCheffete[i])/2; 
		}
		vector<LL> remainingChef; 
		vector<LL> remainingCheffete; 
		for (int i = minPairOdd; i < oddChef.size(); i++) {
			remainingChef.push_back(oddChef[i]); 
		}
		for (int i = minPairOdd; i < oddCheffete.size(); i++) {
			remainingCheffete.push_back(oddCheffete[i]); 
		}
		for (int i = minPairEven; i < evenCheffete.size(); i++) {
			remainingCheffete.push_back(evenCheffete[i]); 
		}
		for (int i = minPairEven; i < evenChef.size(); i++) {
			remainingChef.push_back(evenChef[i]); 
		}
		for (int i = 0; i < remainingChef.size(); i++) {
			sum += (remainingChef[i] + remainingCheffete[i])/2; 
		}
		cout << sum << endl; 
	}
}
