#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,W;
    cin>>N>>W;
    vector<long long>vec(2500000,0);
    for(int i=0;i<N;i++){
        long long S,W,P;
        cin>>S>>W>>P;
        vec.at(S) +=P,vec.at(W)-=P;
    }
    for(int i=0;i<250000;i++){
        vec.at(i+1)+=vec.at(i);
        if(vec.at(i)>W){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}