#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    long long mod=998244353;
    int aiu=2;
    for(int i=0;i<N;i++){
        long long a;
        cin>>a;
        vec.at(a)++;
        if(i==0){
            aiu=a;
        }
    }
    if(vec.at(0)!=1||aiu!=0){
        cout<<0<<endl;
        return 0;
    }
    bool aaa=false;
    for(long long i=0;i<N;i++){
        if(vec.at(i)==0){
            aaa=true;
        }
        if(aaa){
            if(vec.at(i)!=0){
                cout<<0<<endl;
                return 0;
            }
        }
    }
    long long sum=1;
    for(long long i=1;i<N;i++){
        long long count=1;
        for(long long j=0;j<vec.at(i);j++){
            count*=vec.at(i-1);
            count%=mod;
        }
        sum*=count;
        sum%=mod;
    }
    cout<<sum<<endl;
}