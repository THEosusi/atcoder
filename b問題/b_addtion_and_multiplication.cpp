#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // *or+でnまでずっとひくいほうやってけばいいのでは？
  int N,K;
  cin >>N>>K;
   int a=1;
   int A=1,B=1;
  for(int i=0;i<N;i++){
    A=a*2;
    B=a+K;
    if(B>=A){
      a*=2;
  }
      if(B<A){
        a+=K;
      }
  }
  cout << a <<endl;

}
