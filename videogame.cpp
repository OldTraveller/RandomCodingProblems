#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

enum { LEFT = 1 , RIGHT , PICK , DROP , QUIT = 0 } ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;
         
      ll number , height ; 
      cin >> number >> height ;

      ll arr[number] ; 
      for( ll i = 0 ; i < number ; i++ ) {
            cin >> arr[i] ; 
      }
      
      ll choice ; 
      ll pos = 0 ; 
      bool picked = false ; 

      while( cin >> choice ) {

            if( choice == LEFT ) {
                  if( pos == 0 ) {
                        continue ; 
                  }
                  else {
                        pos-- ; 
                  }
            }
            
            else if( choice == RIGHT ) {
                  if( pos == number-1 ) {
                        continue ; 
                  }
                  else {
                        pos++ ; 
                  }
            }

            else if( choice == PICK ) {
                  if( arr[pos] == 0 ) {
                        continue ; 
                  }
                  else if( picked == false ) {
                        picked = true ; 
                        arr[pos]-- ;
                  }
            }

            else if( choice == DROP ) {
                  if( picked == false ) {
                        continue ; 
                  }
                  else {
                        if( arr[pos] == height ) {
                              continue ;
                        }
                        else {
                              arr[pos]++ ; 
                              picked = false ; 
                        }
                  }
            }

            else if( choice == QUIT ) {
                  break ; 
            }
      }

      for( ll i = 0 ; i < number ; i++ ) {
            cout << arr[i] << " " ;
      }
      cout << endl ; 

}