#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      vector<int> prices ; 
      int first , less , afterwhich , money ;
      cin >> first >> less >> afterwhich >> money ; 

      ll number = first ; 
      
      while( number > afterwhich ) {
            prices.push_back(number) ; 
            number -= less ; 
      }     

      int count = 0 ;
      int i ;
      for( i = 0 ; i < prices.size() && money >= prices[i] ; i++ ) {
            money -= prices[i] ; 
            count++ ; 
      }

      int remaining = money/afterwhich ;
      if( i == prices.size() ) {
            cout << count + remaining << endl ;
      }
      else {
            cout << count << endl ;
      }
      
}