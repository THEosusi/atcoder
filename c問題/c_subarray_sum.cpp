#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,K,S;
    cin>>N>>K>>S;
    for(long long i=0;i<K;i++){
        cout<<S<<" ";
    }
    if(S==1000000000){
        for(long long j=K;j<N;j++){
            cout<<1<<" ";
        }
    }
    else{
    for(long long j=K;j<N;j++){
        cout<<S+1<<" ";
    }
    }
    cout<<endl;
}