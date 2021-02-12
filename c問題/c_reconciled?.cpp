#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M;
    cin>>N>>M;
     long long kekka=1;
    long long mod=1000000007;
    if(abs(N-M)>=2){
        cout<<0<<endl;
    }
    else if(abs(N-M)==1){
    for(long long i=min(N,M);0<i;i--){
        kekka*=i;
        kekka%=mod;
    }
    for(long long i=max(N,M);0<i;i--){
        kekka*=i;
        kekka%=mod;
    }
    cout<<kekka<<endl;
    }
    else if(abs(N-M)==0){
    for(long long i=min(N,M);0<i;i--){
        kekka*=i;
        kekka%=mod;
    }
   for(long long i=min(N,M);0<i;i--){
        kekka*=i;
        kekka%=mod;
    }
    kekka*=2;
    kekka%=mod; 
    cout<<kekka<<endl;      
    }
}