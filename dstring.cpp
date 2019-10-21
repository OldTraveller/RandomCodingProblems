    #include <bits/stdc++.h>
    using namespace std ;
    using ll = long long ;

    /* AUTHOR : Abhishek Rai */

    int main() {
          ios :: sync_with_stdio(false) ;
          cin.tie( nullptr ) ;
          cout.tie( nullptr ) ;
     
          ll t ; 
          cin >> t ;
     
          while( t-- ) {
                string name ;
                cin >> name ;
     
                unordered_map<ll,ll> counts ;
                for( ll i = 0 ; i < name.length() ; i++ ) {
                      counts[name.at(i)]++ ;
                }
     
                if( counts.size() < 3 ) {
                      cout << "Dynamic" << endl ; 
                }
                else {
                      vector<ll> number ;
                      for( auto it : counts ) {
                            number.push_back(it.second) ; 
                      }
     
                      sort( number.begin() , number.end() ) ;
                      bool isDynamic = true ; 
                      if( number.size() > 3 ) 
                              if( number.at(3) != number.at(2) + number.at(1) ) 
                                    swap( number.at(0) , number.at(1) ) ;
                      for( ll i = 2 ; i < number.size() ; i++ ) {
                            if( number.at(i-2) + number.at(i-1) != number.at(i) ) {
                                  isDynamic = false ; 
                                  break ; 
                            }
                      }
     
                      if( isDynamic ) {
                            cout << "Dynamic" << endl ;
                      }
                      else {
                            cout << "Not" << endl;
                      }
                }
          }
    } 