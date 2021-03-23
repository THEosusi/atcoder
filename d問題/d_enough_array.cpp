#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,K;
    cin>>N>>K;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long sum=0;
    long long count=0;
    long long right=0;
    for(long long left=0;left<N;++left){
        while(right<N&&sum<K){
            sum+=vec.at(right);
            ++right;
        }
        if(sum>=K){
        count+=N-right+1;
        }
        if(right==left){
            ++right;
        }
        else{
            sum-=vec.at(left);
        }
    }
    cout<<count<<endl;
}