#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
       ios :: sync_with_stdio(false) ;
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       int t ;
       cin >> t ;

       while( t-- ) {
              int n ;
              cin >> n ; 

              string name ;
              cin >> name ; 

              vector<string> position ; 
              for( int i = 0 ; i < n ; i++ ) {
                     string hey ; 
                     cin >> hey ;
                     position.push_back(hey) ;
              }
              
              bool got = false ; 
              hey : while( !got ) {
                     if( name == "Dee" ) {
                            int i = 0 ;
                            for( i = 0 ; i < n ; i++ ) {
                                   if( position[i].at(0) == '0' ) {
                                          if( count(position[i].begin() , position[i].end() , '0' ) > 1 ) {
                                                 int pos = position[i].find('0') ; 
                                                 int pos2 = position[i].find('0' , pos + 1 ) ;
                                                 position[i] = position[i].substr(pos2) ;
                                                 name = "Dum" ; 
                                                 goto hey ;
                                          } else if( count( position[i].begin() , position[i].end() , '0' ) == 1 ) {
                                                        position[i] = "a" ; 
                                                        name = "Dum" ; 
                                                        goto hey ; 
                                                 } else {
                                                        continue ;
                                                 }
                                          }
                                   }
                                   if( i == n ) {
                                          cout << "Dum" << endl ;
                                          got = true ; 
                                   }
                     } else { 
                            int i = 0 ;
                            for( i = 0 ; i < n ; i++ ) {
                                   if( position[i].at(0) == '1' ) {
                                          if( count(position[i].begin() , position[i].end() , '1' ) > 1 ) {
                                                 int pos = position[i].find('1') ; 
                                                 int pos2 = position[i].find('1' , pos + 1 ) ;
                                                 position[i] = position[i].substr(pos2) ;
                                                 name = "Dee" ; 
                                                 goto hey ;
                                          } else if( count ( position[i].begin() , position[i].end() , '1' ) == 1 ) {
                                                        position[i] = "a" ; 
                                                        name = "Dee" ; 
                                                        goto hey ; 
                                                 }
                                          }else {
                                                 continue ; 
                                          }
                                   }
                            if( i == n ) {
                                   cout << "Dee" << endl ;
                                   got = true ; 
                            }
                     }
              }
       }
}