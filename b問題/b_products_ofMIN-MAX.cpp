#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
    long long mod=998244353;
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    if(N==1){
        cout<<vec.at(0)*vec.at(0)%mod<<endl;
        return 0;
    }
    sort(vec.begin(),vec.end());
    long long sum=0;
    long long kake=vec.at(N-1);
    for(int i=N-2;0<=i;i--){
        sum+=vec.at(i)*kake;
        sum%=mod;
        kake*=2;
        kake%=mod;
        kake+=vec.at(i);
        kake%=mod;
    }
    for(int i=0;i<N;i++){
        sum+=vec.at(i)*vec.at(i)%mod;
        sum%=mod;
    }
    cout<<sum<<endl;
}