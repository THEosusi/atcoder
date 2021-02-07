#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    vector<pair<long long,long long>>vec;
    for(long long i=0;i<N;i++){
        long long a,b;
        cin >>a>>b;
        vec.push_back(make_pair(b,a));
    }
    sort(vec.begin(),vec.end());
    long long sum=0;
    for(long long i=0;i<N;i++){
        sum+=vec.at(i).second;
        if(vec.at(i).first>=sum){
            continue;
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}