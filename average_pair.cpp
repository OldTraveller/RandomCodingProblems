#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      ll t ;
      cin >> t ; 

      while( t-- ) {
            ll n ; 
            cin >> n ; 

            ll answer = 0 ; 
            unordered_map<ll,ll> indi_counts ; 
            for( ll i = 0 ; i < n ; i++ ) {
                  int ele ;
                  cin >> ele ; 
                  indi_counts[ele]++ ; 
            }

            vector<ll> v ;
            for( unordered_map<ll,ll> :: iterator it = indi_counts.begin() ; it != indi_counts.end() ; it++ ) {
                  v.push_back(it ->first) ; 
            }

            unordered_map<ll,ll> count_sum ; 
            for( ll i = 0 ; i < v.size() ; i++ ) {
                  for( ll j = i ; j < v.size() ; j++ ) {
                        if( i == j ){
                              count_sum[v.at(i)+v.at(j)] += indi_counts[v.at(i)]*(indi_counts[v.at(j)]-1)/2 ;
                        }     
                        else {
                              count_sum[v.at(i)+v.at(j)] +=  indi_counts[v.at(i)]*indi_counts[v.at(j)] ;
                        }
                  }
            }

            for( ll i = 0 ; i < v.size() ; i++ ) {
                  answer += count_sum[2*v[i]] ;
            }
            cout << answer << endl ;
      }
}