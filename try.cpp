#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll COUNT( vector<ll> &arr , ll start , ll end , ll position ) {
       ll mid((start+end)/2) ; 
       if( mid == position ) return 0 ;
       if( arr[mid] > arr[position] && position < mid ) return COUNT( arr , start , mid - 1 , position ) ; 
       else if( arr[mid] < arr[position] && position < mid ) return 1 + COUNT( arr , start , mid - 1 , position ) ;
       else if( arr[mid] > arr[position] && position > mid ) return 1 + COUNT( arr , mid + 1 , end , position ) ; 
       else if( arr[mid] < arr[position] && position > mid ) return COUNT( arr , mid + 1 , end , position ) ; 
       return 0 ;
}

int main() {
       ios :: sync_with_stdio( false );
       cin.tie( nullptr ) ;
       cout.tie( nullptr ) ;

       ll t ;
       cin >> t ;

       while( t-- ) {
              ll n , q ; 
              cin >> n >> q ;

              vector<ll> arr ;  
              for( ll i = 0 ; i < n ; i++ ) {
                     ll ele ; cin >> ele ; 
                     arr.push_back(ele) ;
              }
              
              ll maximum_ele = *max_element( arr.begin() , arr.end() ) ;
              vector< pair < ll , pair< vector<ll> , vector<ll> > > > vec ;
              for( int i = 0 ; i < n ; i++ ) {
                    vec.at(i).first = arr[i] ;
                    
              }
              while( q-- ) {
                     ll x ;
                     cin >> x ;  
                     ll position = 0 ; 
                     for( int i = 0 ; i < n ; i++ ) if( arr[i] == x ) { position = i ; break ; } ;
                     cout << COUNT( arr , 0 , n  , position ) << endl ;
              }
       }
} 