#include <bits/stdc++.h>
#define FORI( ini , fin ) for( int i = ini ; i < fin ; i++ ) 
#define FORJ( ini , fin ) for( int j = ini ; j < fin ; j++ ) 
using namespace std ; 

int dp[1001] ; 

int main() {
	cout << "ENTER THE DEGREE l " << endl ; 
	int n ; 
	cin >> n ; 
	
	cout << "ENTER THE X VALUE : " << endl ; 
	int x ; 
	cin >> x ; 
	
	dp[0] = 1 ; 

	for( int i = 1 ; i <= n ; i++ ) {
		dp[i] = dp[i-1]*x ; 
	}
		
	cout << "ENTER THE COEFF : " << endl ; 
	
	int coeff[n+1] ; 
	int result = 0 ; 
	for( int i = 0 ; i < n+1 ; i++ )
		cin >> coeff[i] ; 
	
	for( int i = 0 ; i <= n ; i++ ) {
		result += coeff[i]*dp[i] ; 
	}

	cout << "RESULT : " << result << endl ;  	 
}	
