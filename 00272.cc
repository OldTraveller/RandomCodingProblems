#include <bits/stdc++.h>

int main() {
       char c ; bool odd = true ; 
       while ( scanf("%c" , &c ) != EOF ) {
              if ( c == '"' ) {
                     if ( odd ) printf("``") ;
                     else printf("''") ; 
                     odd = !odd ; 
              } else printf("%c" , c ) ; 
       }
}