#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;

enum { BLACK = 1, WHITE , RANDOM } ;

class player {

      private :
            ll rating ; 
            ll mini , maxi ;
            ll time ; 
            bool isRated ;
            int color ;

      public : 
            bool canBePlayed( player obj ) ;
            void Initialize( ll rating , ll mini , ll maxi , ll time , string isRated , string color ) {
                  this -> rating = rating ;
                  this -> mini = mini ; 
                  this -> maxi = maxi ; 
                  this -> time = time ; 
                  this -> isRated = ( isRated == "rated" ) ? true : false ;
                  if( color == "white" ) {
                        this -> color = WHITE ;
                  } 
                  else if( color == "black" ) {
                        this -> color = BLACK ; 
                  }
                  else 
                        this -> color = RANDOM ;
            }
};

bool player :: canBePlayed( player obj ) {
     if( (obj.rating > this->mini && obj.rating < this->maxi) && ( obj.isRated == this->isRated )
       && ( obj.time == this->time ) && ( obj.color == BLACK && this->color == WHITE || obj.color == WHITE && this -> color == BLACK ||
            obj.color == RANDOM && this->color == RANDOM ) ) {
                        return true ; 
            }
      return false ;
}

pair<bool,int> check( int pos , player obj[] , bool isNotDone[] ) {
      for( int i = 0 ; i < pos ; i++ ) {
            if( obj[pos].canBePlayed(obj[i]) && isNotDone[i] ) {
                  isNotDone[i] = false ;
                  return pair<bool,int>(true , i ) ;
            }
      }
      return pair<bool,int>(false,0) ;
}

int main() {
      ios :: sync_with_stdio(false) ;
      cin.tie( nullptr ) ;
      cout.tie( nullptr ) ;

      int t ;
      cin >> t ;

      while( t-- ) {
            int n ;
            cin >> n ; 

            player objects[n] ; 
            for( int i = 0 ; i < n ; i++ ) {
                  ll rating , mini , maxi , time ;
                  string isRated , color ; 
                  objects[i].Initialize( rating , mini , maxi , time ,isRated , color ) ; 
            }

            bool isNotDone[n] ;
            memset( isNotDone , true , sizeof(isNotDone) ) ;

            cout << "wait" << endl ;
            for( int i = 1 ; i < n ; i++ ){
                  pair<bool,int> gotit = check(i,objects,isNotDone) ;
                  if( gotit.first ) {
                        cout << gotit.second + 1 << endl ;
                  }
                  else {
                        cout << "wait" << endl ;
                  }
            }
      }
}