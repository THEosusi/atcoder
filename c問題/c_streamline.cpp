#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M;
    cin>>N>>M;
    vector<long long>vec(M);
    vector<long long>vec2(M-1);
    for(long long i=0;i<M;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<M-1;i++){
        vec2.at(i)=abs(vec.at(i+1)-vec.at(i));
    }
    sort(vec2.begin(),vec2.end());
    long long sum=0;
    for(int i=0;i<M-N;i++){
        sum+=vec2.at(i);
    }
   cout<<sum<<endl;
}  