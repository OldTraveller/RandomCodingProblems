#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int mat[4][4] ; 
      for( int i = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  cin >> mat[i][j] ; 
            }
      }
      
      vector<int> vec ; 
      for( int i  = 1 ; i <= 3 ; i++ ) {
            for( int j = 1 ; j <= 3 ; j++ ) {
                  vec.push_back(mat[i][j]) ; 
            }
      }

      vector<int> numbers ;
      for( int i = 1 ; i <= 9 ; i++ ) {
            numbers.push_back(count(vec.begin() , vec.end() , i ) ) ;
      }

      vector<int> here ; 
      vector<int> zero ; 

      for( int i = 0 ; i < numbers.size() ; i++ ) {
            if( numbers[i] >= 1 ) {
                  int k = numbers[i] ; 
                  while( k-- != 1 ) {
                        here.push_back(i+1) ; 
                  }
            }
            else  {
                  zero.push_back(i+1) ; 
            }
      }

      sort( zero.begin() , zero.end() ) ; 
      sort( here.begin() , here.end() ) ; 
      
      int count = 0 ; 
      for( int i = 0 ; i < zero.size() ; i++ ) {
            count += abs( here[i] - zero[i] ) ; 
      }

      cout << count << endl ;
}
      