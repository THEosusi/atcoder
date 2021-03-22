#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long  N,K;
    cin>>N>>K;
    vector<long long>vec(N);
    long long minn=10000000000;
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }

        for(long long i=0;i<N-K+1;i++){
            long long L=vec.at(i);
            long long R=vec.at(i+K-1);
        long long LR = abs(L) + abs(L-R);
		long long RL = abs(R) + abs(L-R);
        minn = min(minn,min(LR,RL));
        }

    cout<<minn<<endl;
}