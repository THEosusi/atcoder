#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    vector<pair<long long,long long>>vec;
    for(long long i=0;i<N;i++){
        long long a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a+b,a-b));
    }
    sort(vec.begin(),vec.end());
    long long a=vec.at(0).first;
    long long count=1;
    for(long long i=1;i<N;i++){
        if(a<=vec.at(i).second){
            a=vec.at(i).first;
            count++;
        }
    }
    cout<<count<<endl;
}