    #include <bits/stdc++.h>
    using namespace std ;
    using ll = long long ;
    map<ll,ll> positions ; 
    ll m , M ; 
     
    ll COUNT( vector<ll> &arr , ll start , ll end , ll pos ) {
          ll mid = (start + end)/2 ; 
          if( mid == pos ) return 0 ;
          if( pos < mid and arr[mid] > arr[pos] ) return COUNT( arr , start , mid - 1 , pos ) ; 
          else if( pos < mid and arr[mid] < arr[pos] ) return 1 + COUNT( arr , start , mid - 1 , pos ) ; 
          else if( pos > mid and arr[mid] < arr[pos] ) return COUNT( arr , mid + 1 , end , pos ) ; 
          else return 1 + COUNT( arr , mid + 1 , end , pos ) ; 
    }
     
    bool checkMin( vector<ll> &arr , ll pos , ll n , ll mini ) {
    	ll start = 1 ; 	
    	ll end = n ; 
     
    	while( start <= end ) {
    		ll mid = (start+end)/2 ; 
    		if( arr[mid] > m && pos > mid ) return false ; 
    		if( arr[mid] == mini ) return true ;
    		else { 
    			end = mid - 1 ; continue ;
    		} 
    	}
    }
     
    bool checkMax( vector<ll> &arr , ll pos , ll n , ll maxi ) {
    	ll start = 1 ; 
    	ll end = n ;
    	
    	while( start <= end ) {
    		ll mid = ( start + end )/2 ; 
    		if( arr[mid] == M ) return true ; 	
    		else if( arr[mid] < M && pos < mid ) return false ;
    		else {
    			start = mid + 1 ; continue ; 
    		}
    	}
    }
     
    int main() {
          ios :: sync_with_stdio(false) ;
          cin.tie( nullptr ) ;
          cout.tie( nullptr ) ;
     
          int t ;
          cin >> t ;
     
          ll n , q ; 
          cin >> n >> q ; 
     
          vector<ll> arr(n+1) ; 
          for( ll i = 1 ; i <= n ; i++ ) {
                cin >> arr[i] ; 
                positions[arr[i]] = i ; 
          }
     
          M = *max_element( arr.begin() + 1 , arr.end() ) ; 
          m = *min_element( arr.begin() + 1 , arr.end() ) ;
          ll mid = (n+1)/2 ; 
          while(q--) {
                ll x ; cin >> x ; 
                if( x == m ) {
    		if( checkMin( arr , positions[m] , n , m ) ) {
    			cout << 0 << endl ; continue ; 
    		} else {
    			cout << -1 << endl ; continue ; 
    		} 
                }
                if( x == M ) {
    		if( checkMax( arr , positions[M] , n , M ) )  {
    			cout << 0 << endl ; continue ;
    		} else {
    			cout << -1 << endl ; continue ;
    		}
                }
                cout << COUNT( arr , 1 , n , positions[x] ) << endl ;
          }
    }
     
