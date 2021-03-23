#include <bits/stdc++.h>
using namespace std;
 
long long mod =1000000007;
int main() {
    long long N;
    cin>>N;
    long long answer=1;
     map<long long,long long>mp;
     for(long long j=2;j<=N;j++){
         long long aa=j;
         long long bb=j;
    for(long long i = 2; i*i <= aa; ++i){
        while(bb%i==0){
            bb/=i;
            mp[i]++;
        }
    }
    if(bb!=1){
        mp[bb]++;
    }
     }
    for(auto p:mp){
        answer*=(p.second+1);
        answer%=mod;
    }
    cout<<answer<<endl;
}