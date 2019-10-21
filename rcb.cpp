#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
constexpr ll large = 1e9 ; 

void Do_Nothing() {
	for( ll i = 0 ; i < large ; i++ )
		/*  NOTHING ! */ ;
}

int main() {
	int season_num = 1 ;
	int total_seasons = 11 ; 
	
	while( season_num < total_seasons ) {
		cout << " -------------------------- " << endl ;
		cout << " \t Season : " << season_num << endl ;
		cout << " -------------------------- " << endl ;
		string first_option = "ESCN !" ; 
		string second_option = "MSCN !" ;

		string rcbian = first_option ; 
		cout << " RCBIAN : " << rcbian << endl ;
	
		Do_Nothing() ; 
		// AFTER RCB GETS ELIMINATED !
	
		rcbian = second_option ; 
		cout << " WE WIN HEARTS, LUNGS, LIVER !!! " << endl ;
		cout << " RCBIAN : " << rcbian << endl ;
		season_num++ ; 
	}
	cout << endl <<  "AND THE JOURNEY CONTINUES .... " << endl ;
}	

