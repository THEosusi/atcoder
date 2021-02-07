#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    vector<long long>vec2(N,0);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long maxx=0;
    long long imasusumu=0;
    long long purasu=0;
    long long basyo=0;
    for(long long i=0;i<N;i++){ 
        imasusumu+=vec.at(i);
        if(purasu<=imasusumu){
            purasu=imasusumu;
        }
        if(basyo+purasu>=maxx){
            maxx=basyo+purasu;
        }
        basyo+=imasusumu;
    }
    cout<<maxx<<endl;
}