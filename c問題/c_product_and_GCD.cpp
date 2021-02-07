#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,P;
    cin>>N>>P;
    map<long long,long long>mp;
    for(long long i = 2; i*i <= P; ++i){
        while(P%i==0){
            P/=i;
            mp[i]++;
        }
    }
    if(P!=1){
        mp[P]++;
    }
    long long aaa=1;
    for(auto p:mp){
        for(long long i=0;i<p.second/N;i++){
            aaa*=p.first;
        }
    }
    cout<<aaa<<endl;
}