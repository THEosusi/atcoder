#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int K,S;

    cin>>K>>S;
    long long count=0;
    for(int i=0;i<=K;i++){
        for(int j=0;j<=K;j++){
            if(S-i-j<=K&&0<=S-i-j){
                count++;
        }
      }
    }
    cout<<count<<endl;
}