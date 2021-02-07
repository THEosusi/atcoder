#include <bits/stdc++.h>
using namespace std;

int main() {
  long long K,A,B;
  cin >>K>>A>>B;
  if(B-A<=2||K<A){
      cout<<K+1<<endl;
  }
  else{
      long long res=A;//絶対Aいくからそっからふえていくのだけカウント
      K-=A-1;
      if(K%2==1)++res,--K;
      res+=(B-A)*(K/2);
      cout<<res<<endl;
  }

}