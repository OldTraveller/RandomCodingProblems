#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ;
      cin >> t ;
      for( ll j = 1 ; j <= t ; j++ ) {
            string given ; 
            cin >> given ; 

            vector<char> st ;
            for( ll i = 0 ; i < given.length() ; i++ ) {
                  if( st.size() >=2 && st[st.size()-1]== '0' && st[st.size()-2] == '1' && given[i] == '0' ) {
                        st.pop_back() ; 
                        st.pop_back() ;
                  }
                  else {
                        st.push_back(given[i]) ;
                  }
            }

            if( st.empty() ) {
                  cout << "Case " << j << ": " << "yes" << endl ;
            }
            else {
                  cout << "Case " << j << ": " << "no" << endl ;
            }
      }
      
}