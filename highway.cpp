    #include <bits/stdc++.h>
    #define POSITIVE 1 
    #define NEGATIVE 0 
    using namespace std ;
    using ll = long long ;
    constexpr double error = 1e-6 ; 

    // AC SOLUTION
     
    void UPDATE( double position[] , ll n , double velocity[] , int direction[] , double time ) {
          for( ll i = 0 ; i < n ; i++ ) {
                if( direction[i] == POSITIVE ) {
                      position[i] += velocity[i]*time ;
                }
                else {
                      position[i] -= velocity[i]*time ;
                }
          }
    }
     
    int main() {
          ios :: sync_with_stdio(false) ;
          cin.tie( nullptr ) ;
          cout.tie( nullptr ) ;
     
          ll t ; 
          cin >> t ;
          
          while( t-- ) {
                ll n ;
                cin >> n ; 
                double chef_speed , width ; 
                cin >> chef_speed >> width ; 
     
                double velocity[n] ; 
                for( int i = 0 ; i < n ; i++ ) {
                      cin >> velocity[i] ; 
                }
     
                int direction[n] ;
                for( ll i = 0 ; i < n ; i++ ) {
                      cin >> direction[i] ; 
                }
     
                double position[n] ; 
                for( ll i = 0 ; i < n ; i++ ) {
                      cin >> position[i] ; 
                }
     
                double length[n] ;
                for( ll i = 0 ; i < n ; i++ ) {
                      cin >> length[i] ; 
                }
     
                double answer = 0.0 ;
                double chef_time = width*1.0/chef_speed ;
                
                for( int i = 0 ; i < n ; i++ ) {
                      if( direction[i] == POSITIVE ) {
                            if ( position[i] > 0 && position[i]-length[i] > error ) {
                                  answer += chef_time ; 
                                  UPDATE( position , n , velocity , direction , chef_time ) ;
                                  continue ;
                            }
                            else if( position[i] > 0 && position[i] - length[i] >= 0 && position[i] - length[i] < error ) {
                                  double temp_distance = error - ( position[i] - length[i] ) ;
                                  double temp_time  = temp_distance/velocity[i] ; 
                                  answer += ( temp_time + chef_time ) ;
                                  UPDATE( position , n , velocity , direction , temp_time + chef_time ) ;
                            }
                            else if( position[i] >= 0 && position[i] - length[i] < 0 ) {
                                  double temp_pos =  length[i] - position[i] + error ; 
                                  double time_to_cross = temp_pos/velocity[i] ; 
                                  answer += ( time_to_cross + chef_time ) ;
                                  UPDATE( position , n , velocity , direction , time_to_cross + chef_time ) ;
                            }
                            else if( position[i] < 0 ) {
                                  if( (-position[i] - error )/velocity[i] > chef_time ){
                                        answer += chef_time ;
                                        UPDATE( position , n , velocity , direction ,  chef_time ) ;
                                        continue ; 
                                  }
                                  double distance = -position[i] + length[i] ;
                                  double time_to_cross = distance/velocity[i] ; 
                                  answer += ( time_to_cross + chef_time ) ; 
                                  UPDATE( position , n , velocity , direction ,  time_to_cross + chef_time ) ;
                                  continue ;
                            }
                      }
                      else {
                            if( position[i] > 0 ) {
                                  if( ( position[i] - error )/velocity[i] < chef_time ) {
                                        answer += ( (length[i]+position[i]+error )/velocity[i] + chef_time ) ; 
                                        UPDATE( position , n , velocity , direction , (length[i]+position[i])/velocity[i] + chef_time ) ; 
                                  }
                                  else {
                                        answer += chef_time ; 
                                        UPDATE( position , n , velocity , direction ,  chef_time ) ;
                                        continue ; 
                                  }
                            }
                            else if( position[i] <= 0 && position[i] + length[i] >= 0 ) {
                                  double distance = position[i] + length[i] + error ; 
                                  double temp_time = distance/velocity[i] ;
                                  answer += ( chef_time + temp_time ) ;
                                  UPDATE( position , n , velocity , direction ,  chef_time + temp_time ) ;
                                  continue ;
                            }
                            else if( position[i] < 0 && position[i] + length[i] < -error ) {
                                  answer += chef_time ; 
                                  UPDATE( position , n , velocity , direction ,  chef_time ) ;
                                  continue ;
                            }
                      }     
                }
                cout << answer << endl ;
          }
    } 