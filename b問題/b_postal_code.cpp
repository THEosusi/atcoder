#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B;
  cin >> A>>B;
  string S;
  cin >>S;
  int count=0;
  for(int i=0;i<S.size();i++){
      if(S.at(i)=='-'){
      count++;
      } 
    }
      if(count!=1){
       cout <<"No" <<endl;
       return 0;
      }

  if(S.at(A)=='-'){
      cout <<"Yes"<<endl;
  }
  else{
      cout <<"No"<<endl;
  }
}