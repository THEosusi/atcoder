#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >>S>>T;
    int count=T.size();
    for(int i=0;i<S.size()-T.size()+1;i++){
        int aaa=0;
        for(int j=0;j<T.size();j++){
          if(S.at(i+j)!=T.at(j)){
              aaa++;
          }
        }
        count=min(aaa,count);
    }
    cout <<count <<endl;
}