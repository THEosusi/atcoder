#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M,T;
    cin>>N>>M>>T;
    long long a=N;
    vector<long long>vecA(M);
    vector<long long>vecB(M);
    for(long long i=0;i<M;i++){
        cin>>vecA.at(i)>>vecB.at(i);
    }
    N-=vecA.at(0);
    if(N<=0){
            cout<<"No"<<endl;
            return 0;        
    }
        N+=vecB.at(0)-vecA.at(0);
        if(a<=N){
            N=a;
        }
    for(long long i=1;i<M;i++){
        N-=vecA.at(i)-vecB.at(i-1);
        if(N<=0){
            cout<<"No"<<endl;
            return 0;
        }
        N+=vecB.at(i)-vecA.at(i);
        if(a<=N){
            N=a;
        }
    }
    N-=T-vecB.at(M-1);
        if(N<=0){
            cout<<"No"<<endl;
            return 0;
        }
        cout<<"Yes"<<endl;
}