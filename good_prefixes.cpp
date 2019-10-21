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
            string name ;
            cin >> name ; 

            ll n ;
            cin >> n ; 
            
            ll len = name.length() ; 
            ll countA = 0 ; 
            ll countB = 0 ; 
            ll answer = 0 ; 

            for( ll i = 0 ; i < name.length() ; i++ ) {
                  if( name.at(i) == 'a' ) {
                        countA++ ;             
                  }
                  else {
                        countB++ ; 
                  }

                  if( countA > countB ) {
                        answer++ ; 
                  }
            }

            if( n == 1 ) {
                  cout << answer << endl ;
                  continue ; 
            }
            if( countB == 0 ) {
                  cout << countA*n << endl ;
                  continue ;
            }
            if( countA == 0 ) {
                  cout << 0 << endl ;
                  continue ; 
            }
            if( countA == countB ) {
                  cout << n*answer << endl ;
                  continue ;
            }
            else {
                  n-- ; 
                  ll temp_count = 0 ; 

                  if( countA > countB ) {
                        while( n-- ) {
                              temp_count = 0 ; 
                              for( ll i = 0 ; i < name.length() ; i++ ) {
                                    if( name.at(i) == 'a' ) {
                                          countA++ ;  
                                    }
                                    else {
                                          countB++ ; 
                                    }

                                    if( countA > countB ) {
                                          answer++ ; 
                                    }
                                    else {
                                          temp_count++ ; 
                                    }

                              }
                              if( temp_count == 0 ) {
                                    break ;
                              }
                        }
                        if( n >= 0 ) {
                              cout << answer + n*len << endl ;
                        }
                        else {
                              cout << answer << endl ;
                        }
                  }

                  else {
                        while(n--) {
                              temp_count = 0 ;
                              for( ll i = 0 ; i < name.length() ; i++ ) {
                                    if( name.at(i) == 'a' ) {
                                          countA++ ; 
                                    }
                                    else {
                                          countB++ ; 
                                    }

                                    if( countA > countB ) {
                                          answer++ ; 
                                          temp_count++ ; 
                                    }
                              }
                              if( temp_count == 0 ) {
                                    break ; 
                              }
                        }
                        cout << answer << endl ;
                  }
            }
      }
}