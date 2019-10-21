#include <bits/stdc++.h> 
using namespace std ;

bool isOdd ( int n ) { return n%2 == 1 ; } 

int main() {
	string str ; cin >> str ;
	unordered_map<char,int> to_check ; 
	for ( int i = 0 ; i < str.size() ; i++ ) to_check[str.at(i)]++ ;
	int len = str.length() ; 
	if ( isOdd( len ) or isOdd( len/2 ) ) {
		cout << "impossible" << endl ;
		return 0 ; 
	}
       if ( to_check['['] != to_check[']'] or to_check['('] != to_check[')'] ) {
              cout << "impossible" << endl ; 
              return 0 ; 
       }
       stack<char> first ; 
       stack<char> second ; 
       int open_per = len/4 ; 
       int first_open_count = 0 ; 
       int second_open_count = 0 ; 
	int ans[len] ; memset( ans , 0 , sizeof ans ) ; 
	for ( int i = 0 ; i < len ; i++ ) {
              if ( (str.at(i) == '[') or (str.at(i) == '(') ) {
                     if ( first_open_count < open_per ) {
                            first.push( str.at(i) ) ; 
                            cout << "PUSHING 1 : " << str.at(i) << endl ; 
                            first_open_count++ ; 
                            ans[i] = 1 ; 
                     } else {
                            cout << "PUSHING 2 : ) " << str.at(i) << endl ; 
                            second.push ( str.at(i) ) ;
                            ans[i] = 2 ; 
                     }
              } else {
                     if ( str.at(i) == ']' ) {
                            if ( first.size() and first.top() ) {
                                   cout << "POPPING 1 : ] " << endl ; 
                                   first.pop() ; ans[i] = 1 ; 
                            } else {
                                   cout << "POPPING 2 : ] " << endl ; 
                                   second.pop() ; ans[i] = 2 ; 
                            }
                     } else {
                            if ( first.size() and first.top() == '(' ) {
                                   cout << "POPPING 1 : ) " << endl ; 
                                   first.pop() ; ans[i] = 1 ; 
                            } else {
                                   cout << "POPPING 2 : ) " << endl ; 
                                   second.pop() ; ans[i] = 2 ; 
                            }
                     }
              }
	} for ( int i = 0 ; i < len ; i++ ) cout << ans[i] << " " ;
}
