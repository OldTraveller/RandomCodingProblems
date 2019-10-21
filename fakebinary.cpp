    #include <bits/stdc++.h>
    using namespace std ;
    using ll = long long ;
    map<ll,ll> positions ; 
    ll m , M ; 
     
    ll COUNT( vector<ll> &arr , ll start , ll end , ll pos ) {
	ll mid = (start+end)/2 ;
	if( mid == pos ) return 0 ; 
	else if( pos < mid && arr[mid] > arr[pos] ) return COUNT( arr , start , mid - 1 , pos ) ; 
	else if( pos < mid && arr[mid] < arr[pos] ) return 1 + COUNT( arr , start , mid - 1 , pos ) ; 
	else if( pos > mid && arr[mid] < arr[pos] ) return COUNT( arr , mid + 1 , end , pos ) ; 
	else return 1 + COUNT( arr , mid + 1 , end , pos ) ; 

    }
     
    ll COUNT_MIN ( vector<ll> &arr , ll start , ll end , ll pos ) {
     	ll mid = (start+end)/2 ; 
	if( mid == pos ) return 0 ; 
	else if( arr[mid] > m && pos < mid ) return COUNT_MIN( arr , start , mid - 1 , pos ) ;
	else return 2 + COUNT_MIN( arr , start , mid - 1 , pos ) ; 
    }
	
    ll COUNT_MAX ( vector<ll> &arr , ll start , ll end , ll pos ) {
	ll mid = (start+end)/2 ;
	if( mid == pos ) return 0 ; 
	else if( arr[mid] < M && pos > mid ) return COUNT_MAX( arr , mid + 1 , end , pos ) ; 
	else return 2 + COUNT_MAX( arr , mid + 1 , end , pos ) ; 
    }


 
    int main() {
          ios :: sync_with_stdio(false) ;
          cin.tie( nullptr ) ;
          cout.tie( nullptr ) ;
     
          int t ;
          cin >> t ;
     
          ll n , q ; 
          cin >> n >> q ; 
     
          vector<ll> arr(n) ; 
          for( ll i = 0 ; i < n ; i++ ) {
                cin >> arr[i] ; 
                positions[arr[i]] = i ; 
          }
     
          M = *max_element( arr.begin() , arr.end() ) ; 
          m = *min_element( arr.begin() , arr.end() ) ;
          ll mid = (n+1)/2 ; 
          while(q--) {
                ll x ; cin >> x ;
		if( x == m ) {
			cout << COUNT_MIN( arr , 0 , n-1 , positions[m] )  << endl ;
			continue ; 
		}
		if( x == M ) {
			cout << COUNT_MAX( arr , 0 , n-1 , positions[M] ) << endl ; 
			continue ; 
		} 
                cout << COUNT( arr , 0 , n -1 , positions[x] ) << endl ;
          }
    }
     
