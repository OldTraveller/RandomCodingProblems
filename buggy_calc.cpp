#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t ; 

      while( t-- ) {
            ll num1 ; 
            ll num2 ; 
            cin >> num1 >> num2 ;

            string answer = "" ; 
            while( num1 > 0 && num2 > 0 ) {
                  int temp1 = num1%10 ; 
                  int temp2 = num2%10 ; 
                  answer += to_string((temp1+temp2)%10) ;
                  num1/=10 ; 
                  num2/=10 ; 
            }

            if( num1 > 0 || num2 > 0 )
                  answer += to_string(num1+num2) ; 

            reverse( answer.begin() , answer.end() ) ;
            cout << answer << endl ;
      }     
}