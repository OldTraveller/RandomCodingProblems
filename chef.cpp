#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {1,2,3,4}; 
	int arr2[] = {4,3,2,1}; 
	int sum1 = 0;
	int sum2 = 0; 
	for (int i = 0; i < 4; i++) {
		sum1 += (arr[i] + arr2[i])/2; 
		sum2 += (arr[i] + arr2[4 - i - 1])/2; 
	}
	cout << "SUM 1 : " << sum1 << endl; 
	cout << "SUM 2 : " << sum2 << endl;
}
