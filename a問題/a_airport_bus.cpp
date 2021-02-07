#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,C,K;
    cin>>N>>C>>K;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    long long sum=vec.at(0)+K;
    long long noru=0;
    long long daisuu=1;
    for(long long i=0;i<N;i++){
        if(vec.at(i)<=sum&&noru<C){
            noru++;
            continue;
        }
        else {
            daisuu++;
            noru=1;
            sum=vec.at(i)+K;
        }
    }
    cout<<daisuu<<endl;
}