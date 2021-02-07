#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,S,D;
    bool aaa=false;
    cin>>N>>S>>D;
    for(long long i=0;i<N;i++){
        long long x,y;
        cin>>x>>y;
        if(S<=x){
            continue;
        }
        if(y<=D){
            continue;
        }
        aaa=true;
    }
    if(aaa){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}