#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,K;
    cin >>N>>K;
    vector<long long>vec(N,0);
    set<long long>S;
    for(long long i=0;i<N;i++){
        long long x;
        cin >>x;
        vec.at(x-1)++;
        S.insert(x);
    }
    if(K>=S.size()){
        cout<<0<<endl;
    }
    else{
        sort(vec.begin(),vec.end());
        long long sum=0;
        long long i=0;
        long long count=0;
        while(count<S.size()-K){
            if(vec.at(i) != 0){
                sum+=vec.at(i);
                count++;
            }
            i++;
        }
        cout<<sum<<endl;
    }
}
