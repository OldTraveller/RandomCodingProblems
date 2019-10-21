#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

double round(double var) {
    double value = (int)(var * 100 + .5);
    return (double)value / 100;
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int n ;
      cin >> n ; 

      int count = 0 ; 
      double sum = 0 ; 

      for( int i = 0 ; i < n ; i++ ) {
            double rate ; 
            cin >> rate ; 

            if( rate >= 90 && rate <= 100 ) {
                  sum += rate ;
                  count++ ; 
            }
      }

      double answer = sum/count ; 
      cout << setprecision(2) << round(answer) << endl ;
}