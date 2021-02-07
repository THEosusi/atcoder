#include <bits/stdc++.h>
using namespace std;

int main() {
    int N ;
    cin >> N ;
    vector<char> vec(N);
    int P=0,W=0,G=0,Y=0;
    for (char x : vec){
      cin >> x ;
      if(x=='P'){
          ++P;
      }
      else if(x=='W'){
         ++W;
      }
      else if(x=='G'){
          ++G;
      }
      else if(x=='Y'){
          ++Y;
      }
   }
   if(P>=1&&W>=1&&G>=1&&Y>=1) {
       cout <<"Four"<<endl;
   } 
   else if((P>=1&&W>=1&&G>=1)||(P>=1&&W>=1&&Y>=1)||(P>=1&&G>=1&&Y>=1)||(W>=1&&G>=1&&Y>=1)){
       cout <<"Three"<<endl;
   }   
}