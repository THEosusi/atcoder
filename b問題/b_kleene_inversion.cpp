#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long mod=1000000007;
    int N;
    cin>>N;
    long long K;
    cin>>K;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    int count=0;
    long long sum=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(vec.at(i)>vec.at(j)){
                count++;
            }
        }
    sum+=count*K;
    sum%=mod;
    count=0;
    }


    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(vec.at(i)>vec.at(j)){
                count++;
            }
        }
    }
    long long aa=(K*(K-1)/2%mod);
    sum+= count*aa;
    sum%=mod;
    cout<<sum<<endl;
}