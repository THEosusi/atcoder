#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,M;
    cin>>N>>M;
    priority_queue<long long> aaa;
    for(long long i=0;i<N;i++){
        long long a;
        cin>>a;
        aaa.push(a);
    }
    long long i=0;
    while(i<M){ 
        long long b=aaa.top()/2;
        aaa.pop();
        aaa.push(b);
        i++;
    }
    long long sum=0;
    for(long long i=0;i<N;i++){
        sum+=aaa.top();
        aaa.pop();
    }
    cout<<sum<<endl;
}