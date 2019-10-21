#include <bits/stdc++.h>
#define MAX 500
using namespace std ;
int TABLE[SIZE] ; 

void ShiftTable( char p[] ) {
        int m = strlen(p) ; 
        for( int i = 0 ; i < m ; i++ ) TABLE[i] = m ; 
        for( int j = 0 ; j < m ; j++ ) TABLE[p[j]] = m - 1 - j ; 
}

int horspool( char TEXT[] , char PATTERN[] ) {
        int m = strlen(PATTERN) ; 
        int n = strlen(TEXT) ; 
        cout << "LENGTH OF PATTERN : " << m << endl ; 
        cout << "LENGTH OF TEXT : " << n << endl ; 
        i = m - 1 ; 
        while( i < n ) {
                int k = 0 ; 
                while( (k<n) && (PATTERN[m-1-k] == TEXT[i-k] ) ) k++ ;
                if( k == m ) return i - m + 1 ;
                else i += TABLE[TEXT[i]] ; 
        }
        return -1 ; 
}

int main() {
        char TEXT[SIZE] , PATTERN[SIZE] ; 
        cout << "Enter the Text : " << endl ;
        cin >> TEXT ;
        cout << "Enter the Pattern : " << endl ; 
        cin >> PATTERN ; 
        ShiftTable(PATTERN) ; 
        int pos = horspool(TEXT,PATTERN) ; 
        if(pos==-1) cout << "Pattern Not Found ! " << endl ; 
        else cout << "Pattern foudn at : " << pos + 1 << endl ;
}
