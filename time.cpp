#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      map<int,string> mp ; 
      mp[1] = "one" ; 
      mp[2] = "two" ; 
      mp[3] = "three" ; 
      mp[4] = "four" ; 
      mp[5] = "five" ; 
      mp[6] = "six" ; 
      mp[7] = "seven" ; 
      mp[8] = "eight" ; 
      mp[9] = "nine" ; 
      mp[10] = "ten" ; 
      mp[11] = "eleven" ; 
      mp[12] = "twelve" ; 
      mp[13] = "thirteen" ; 
      mp[14] = "fourteen" ; 
      mp[15] = "fifteen" ; 
      mp[16]  = "sixteen" ; 
      mp[17] = "seventeen" ; 
      mp[18] = "eighteen" ; 
      mp[19] = "nineteen" ; 
      mp[20] = "twenty" ; 
      mp[21] = "twenty one" ; 
      mp[22] = "twenty two" ; 
      mp[23] = "twenty three" ; 
      mp[24] = "twenty four" ; 
      mp[25] = "twenty five" ; 
      mp[26] = "twenty six" ; 
      mp[27] = "twenty seven" ; 
      mp[28] = "twenty eight" ; 
      mp[29] = "twenty nine" ; 
      
      int h , m ; 
      cin >> h >> m ; 

      if( m == 0 ) {
            cout << mp[h] << " o' clock " ;
      }

      else if( m == 15 ) {
            cout << "quarter past " << mp[h] << endl ; 
      }

      else {
            if( m >= 30 ) {
                  if( m == 30 ) {
                        cout << "half past " << mp[h] << endl ;
                  }
                  else if( m == 45 ) {
                        cout << "quarter to " << mp[h+1] << endl ;
                  }
                  else {
                        m = 60 - m ; 
                        cout << mp[m] << " minutes to " << mp[h+1] << endl ;
                  }
            }
            
            else {
                  if( m == 1 ) {
                        cout << mp[1] << " minute past " << mp[h] << endl ;
                  }
                  else {
                        cout << mp[m] << " minutes past " << mp[h] << endl ;
                  }
            }
      }
      
}