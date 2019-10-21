#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ;

      unordered_map<char,int> first_half; 
      unordered_map<char,int> second_half; 

      string number ;
      cin >> number ; 

      for( int i = 0 ; i < number.length()/2 ; i++ ) {
            first_half[number.at(i)]++ ; 
      }

      for( int i = number.length()/2 ; i < number.length() ; i++ ) {
            second_half[number.at(i)]++ ; 
      }

      if( first_half.size() > 2 || second_half.size() > 2 ) {
            cout << "NO" << endl ; 
      } else {
            int first_sum = 4*first_half.count('4') + 7*first_half.count('7') ;
            int second_sum = 4*second_half.count('4') + 7*second_half.count('7') ;

            if( first_sum == second_sum ) {
                  cout << "YES" << endl ; 
            } else {
                  cout << "NO" << endl ;
            }
      }
}