#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,M;
    cin>>N>>M;
    vector<pair<long long,long long>>vec;
    for(long long i=0;i<N;i++){
        long long a;
        cin>>a;
        vec.push_back(make_pair(a,1));
    }
    for(long long i=0;i<M;i++){
        long long a,b;
        cin>>a>>b;
         vec.push_back(make_pair(b,a));       
    }
    long long sum=0;
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    long long count=N;
    for(long long i=0;i<vec.size();i++){
        if(vec.at(i).second<=count){
            sum+=vec.at(i).first*vec.at(i).second;
            count-=vec.at(i).second;
        }
        else{
            sum+=vec.at(i).first*count;
            break;
        }
    }
    cout<<sum<<endl;
}