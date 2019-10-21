    #include <bits/stdc++.h>
    using namespace std ;
    using ll = long long ;
     
    int main() {
          ios :: sync_with_stdio(false) ;
          cin.tie( nullptr ) ;
          cout.tie( nullptr ) ;
     
          ll t ;
          cin >> t ;
          
          while( t-- ) {
                ll n ;
                cin >> n ;  
     
                unordered_map<string,ll> counts ;
                for( ll i = 0 ; i < n ; i++ ) {
                      string name ;
                      cin >> name ; 
                      counts[name]++ ; 
                }
     
                if( n == 0 ) {
                      cout << "Draw" << endl ;
                      continue ;
                }
     
                vector< pair<string,ll> > answer ;
                for( auto it : counts ) {
                      answer.push_back(pair<string,ll>(it.first,it.second)) ;
                }
     
                if( answer.size() == 1 ) {
                      cout << answer.at(0).first << endl ;
                      continue ;
                }
     
                if( answer.at(0).second == answer.at(1).second ) {
                      cout << "Draw" << endl ; 
                } else {
                      if( answer.at(0).second > answer.at(1).second ) {
                            cout << answer.at(0).first << endl ; 
                      } else {
                            cout << answer.at(1).first << endl ;
                      }
                }
          }
     
    } 