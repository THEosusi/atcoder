#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,K;
    cin>>N>>K;
    vector<pair<long long,long long>>vec;
    for(long long i=0;i<N;i++){
        long long a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
    long long ima=0;
    for(long long i=0;i<N;i++){
        if(K>=vec.at(i).first-ima){
        K-=vec.at(i).first-ima;
        ima=vec.at(i).first;
        K+=vec.at(i).second;
        }
        else{
            cout<<K+ima<<endl;
            return 0;
        }
    }
    cout<<ima+K<<endl;

}