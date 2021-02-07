#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    long long sum=0;
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
        sum+=vec.at(i);
    }
    long long X=vec.at(0);
    long long Y=sum-vec.at(0);
    long long minn=abs(X-Y);
    for(long long i=1;i<N-1;i++){
        X+=vec.at(i);
        Y-=vec.at(i);
        minn=min(abs(X-Y),minn);
    }
    cout<<minn<<endl;

}