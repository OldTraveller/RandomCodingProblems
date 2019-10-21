#include <bits/stdc++.h>
#define SIZE 500
using namespace std ;
using ll = long long ;
int TABLE[SIZE] ; 

void ShiftTable( char PATTERN[] ) {
       int m = strlen( PATTERN ) ; 
       for( int i = 0 ; i < SIZE ; i++ ) TABLE[i] = m ; 
       for( int i = 0 ; i < m - 1 ; i++ ) TABLE[PATTERN[i]] = m - 1 - i ; 
}

int horspool( char PATTERN[] , char TEXT[] ) {
       int m = strlen(PATTERN) ; 
       int n = strlen(TEXT) ; 
       int i  = m - 1 ; 

       while( i < n ) {
              int k = 0 ; 
              while( (k < m) && (PATTERN[m-1-k] == TEXT[i-k]) ) k++ ;
              if( k == m ) return i - m + 1 ; 
              else i += TABLE[TEXT[i]] ; 
       }
       return -1 ; 
}

int main() {
       char PATTERN[SIZE] , TEXT[SIZE] ; 
       cout << "Enter the Pattern : " << endl ; 
       cin >> PATTERN ; 
       cout << "Enter the Text : " << endl ; 
       cin >> TEXT ; 
       ShiftTable(PATTERN) ; 
       int pos = horspool( PATTERN , TEXT ) ; 
       if( pos == -1 ) cout << "Pattern Not found ! " << endl ; 
       else cout << "Pattern Found at : " << pos + 1 << endl ; 
}