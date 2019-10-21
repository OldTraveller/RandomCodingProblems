#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int coins[] = { 1,2,5,10,20,50,100 } ;
size_t size = sizeof(coins)/sizeof(int) ; 

void how_many_in( int amount ) {
      map<int,int> mp ; 
      for( int i = size - 1 ; i >= 0 ; i-- ) {
            while( amount >= coins[i] ) {
                  amount -= coins[i] ; 
                  mp[coins[i]]++ ; 
            }
      }

      for( auto &it : mp ) {
            cout << it.first << " " << it.second << endl ;
      }
}

int main() {
      cout << "ENTER THE AMOUNT : " << endl ;
      int amount ; 
      cin >> amount ; 

      how_many_in( amount ) ; 
}