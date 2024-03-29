#include <bits/stdc++.h>
using namespace std ;

class SegmentTree {
	int n ; 
	vector<int> st , A ; 
	int left( int p ) { return p << 1 ; } ;
	int right ( int p ) { return p << 1 + 1 ; } ; 
	
	void build ( int p , int l , int r ) {
		if ( l == r ) { st[p] = l ; } 
		else {
			build( left(p) , l , (l+r)/2 ) ; 
			build( right(p) , (l+r)/2 + 1 , r ) ;
			int p1 = st[left(p)] , p2 = st[right(p)] ; 
			st[p] = ( A[p1] <= A[p2] ) ? p1 : p2 ; 
		} 
	}
	int rmq ( int p , int l , int r , int i , int j ) {
		if ( i > r or j < l ) return -1 ; 
		if ( l >= i and r <= j ) return st[p] ; 
		int p1 = rmq( left(p) , l , (l+r)/2 , i , j ) ; 
		int p2 = rmq( right(p) , (l+r)/2 + 1 , r ,  i , j ) ; 
		if ( p1 == -1 ) return p2 ; 
		if ( p2 == -1 ) return p1 ; 
		return ( A[p1] <= A[p2] ) ? p1 : p2 ; 
	}
	public :
		SegmentTree( const vector<int> &_A ) {
			A = _A ; n = (int)A.size() ; 
			st.assign( 4*n , 0 ) ; 
			build ( 1 , 0 , n - 1 ) ; 
		}
};

int main() {
	
}
