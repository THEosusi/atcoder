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
    sort(vec.begin(),vec.end());
    long long sum=0;
    for(int i=0;i<N-1;i++){
        long long aaa=0;
        double count=0;
        for(int j=i+1;j<N;j++){
            aaa+=vec.at(j)*pow(2.0,count);
            count++;
        }
        sum+=aaa*vec.at(i);
        sum%=mod;
    }
    for(int i=0;i<N;i++){
        sum+=(vec.at(i)*vec.at(i));
        sum%=mod;
    }
    cout<<sum<<endl;
}