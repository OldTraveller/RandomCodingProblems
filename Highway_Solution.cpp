#include <bits/stdc++.h>
#define FAST_IO   ios :: sync_with_stdio(false) ;\
                  cin.tie( nullptr ) ;\
                  cout.tie( nullptr ) ;
#define POSITIVE 1 
using namespace std ;
using ll = long long ;
constexpr double precision = 1e-6 ; 

void Position_Change( double pos[] , ll n , double vel[] , int d[] , double t ) {
      for( ll i = 0 ; i < n ; i++ ) {
            if( d[i] == POSITIVE ) {
                  pos[i] += vel[i]*t ;
            }
            else {
                  pos[i] -= vel[i]*t ;
            }
      }
}

int main() {

      FAST_IO ; 
      
      ll t ; 
      cin >> t ;
      
      while( t-- ) {
            ll n ;
            cin >> n ; 
            double c_s , r_w ; 
            cin >> c_s >> r_w ; 

            double vel[n] ; 
            for( int i = 0 ; i < n ; i++ ) {
                  cin >> vel[i] ; 
            }

            int d[n] ;
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> d[i] ; 
            }

            double pos[n] ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> pos[i] ; 
            }

            double c_l[n] ;
            for( ll i = 0 ; i < n ; i++ ) {
                  cin >> c_l[i] ; 
            }

            double to_show = 0.0 ;
            double chef_t = r_w*1.0/c_s ;
            
            for( int i = 0 ; i < n ; i++ ) {
                  if( d[i] == POSITIVE ) {
                        if ( pos[i] > 0 && pos[i]-c_l[i] > precision ) {
                              to_show += chef_t ; 
                              Position_Change( pos , n , vel , d , chef_t ) ;
                              continue ;
                        }
                        else if( pos[i] > 0 && pos[i] - c_l[i] >= 0 && pos[i] - c_l[i] < precision ) {
                              double temp_distance = precision - ( pos[i] - c_l[i] ) ;
                              double temp_t  = temp_distance/vel[i] ; 
                              to_show += ( temp_t + chef_t ) ;
                              Position_Change( pos , n , vel , d , temp_t + chef_t ) ;
                        }
                        else if( pos[i] >= 0 && pos[i] - c_l[i] < 0 ) {
                              double temp_pos =  c_l[i] - pos[i] + precision ; 
                              double t_to_cross = temp_pos/vel[i] ; 
                              to_show += ( t_to_cross + chef_t ) ;
                              Position_Change( pos , n , vel , d , t_to_cross + chef_t ) ;
                        }
                        else if( pos[i] < 0 ) {
                              if( (-pos[i] - precision )/vel[i] > chef_t ){
                                    to_show += chef_t ;
                                    Position_Change( pos , n , vel , d ,  chef_t ) ;
                                    continue ; 
                              }
                              double distance = -pos[i] + c_l[i] ;
                              double t_to_cross = distance/vel[i] ; 
                              to_show += ( t_to_cross + chef_t ) ; 
                              Position_Change( pos , n , vel , d ,  t_to_cross + chef_t ) ;
                              continue ;
                        }
                  }
                  else {
                        if( pos[i] > 0 ) {
                              if( ( pos[i] - precision )/vel[i] < chef_t ) {
                                    to_show += ( (c_l[i]+pos[i]+precision )/vel[i] + chef_t ) ; 
                                    Position_Change( pos , n , vel , d , (c_l[i]+pos[i])/vel[i] + chef_t ) ; 
                              }
                              else {
                                    to_show += chef_t ; 
                                    Position_Change( pos , n , vel , d ,  chef_t ) ;
                                    continue ; 
                              }
                        }
                        else if( pos[i] <= 0 && pos[i] + c_l[i] >= 0 ) {
                              double distance = pos[i] + c_l[i] + precision ; 
                              double temp_t = distance/vel[i] ;
                              to_show += ( chef_t + temp_t ) ;
                              Position_Change( pos , n , vel , d ,  chef_t + temp_t ) ;
                              continue ;
                        }
                        else if( pos[i] < 0 && pos[i] + c_l[i] < -precision ) {
                              to_show += chef_t ; 
                              Position_Change( pos , n , vel , d ,  chef_t ) ;
                              continue ;
                        }
                  }     
            }
            cout << to_show << endl ;
      }
}