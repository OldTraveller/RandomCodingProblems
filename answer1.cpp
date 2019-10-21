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

            ll basic_countA[name.length()] ; 
            ll basic_countB[name.length()] ; 
            ll cntA = 0 ; 
            ll cntB = 0 ; 
            ll answer = 0 ; 
            bool type1 = false ;
            bool type2 = false ;
            bool type3 = false ;

            for( ll i = 0 ; i < name.length() ; i++ ) {
                  if( name.at(i) == 'a' ) {
                        basic_countA[i] = ++cntA ; 
                        basic_countB[i] = cntB ; 
                  }
                  else {
                        basic_countA[i] = cntA ;
                        basic_countB[i] = ++cntB ; 
                  }

                  if( basic_countA[i] > basic_countB[i] ) {
                        answer++ ; 
                  }
            }
            if( cntA == cntB ) {
                  type1 = true ; 
            }
            else if( cntA > cntB ) {
                  type2 = true ;
            }
            else if( cntA < cntB ){
                  type3 = true ; 
            }

            if( type1 ) {
                  cout << n*answer << endl ; 
                  continue; 
            }
            else {
                  n-- ;
                  ll actual_countsA[name.length()] ; 
                  ll actual_countsB[name.length()] ; 
                  copy(basic_countA , basic_countA + name.length() , actual_countsA ) ; 
                  copy(basic_countB , basic_countB + name.length() , actual_countsB ) ; 

                  if( type2 ) {
                        ll howmany = 0 ; 
                        ll count_loop = 0 ; 
                        while( n-- ) {
                              howmany = 0 ; 
                              for( ll i = 0 ; i < name.length() ; i++ ) {
                                    actual_countsA[i] += ( cntA + basic_countA[i] ) ; 
                                    actual_countsB[i] += ( cntB + basic_countB[i] ); 

                                    if( actual_countsA[i] > actual_countsB[i] ) {
                                          answer++ ; 
                                          howmany++ ; 
                                    }
                              }
                              cntA = actual_countsA[name.size()-1] ; 
                              cntB = actual_countsB[name.size()-1] ; 
                              count_loop++ ; 
                              if( howmany == name.size() ) 
                                    break; 
                        }
                        if( n > 0 )
                              answer += ( n - count_loop )*name.size() ; 
                        cout << answer << endl ;
                        continue ;  
                  }

                  else if( type3 ) {
                        ll howmany = 0 ;
                        while( n-- ) {
                              howmany = 0 ;
                              for( ll i = 0 ; i < name.length() ; i++ ) {
                                    actual_countsA[i] += ( cntA + basic_countA[i] ) ; 
                                    actual_countsB[i] += ( cntB + basic_countB[i] ) ; 

                                    if( actual_countsA[i] > actual_countsB[i] ) {
                                          answer++ ; 
                                    }
                                    else {
                                          howmany++ ; 
                                    }
                              }
                              cntA = actual_countsA[name.size()-1] ;
                              cntB = actual_countsB[name.size()-1] ;

                              if( howmany == name.length() ) {
                                    break ;
                              }
                        }
                        cout << answer << endl ;
                  }
            }
      }
}