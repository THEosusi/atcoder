#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<int>veca(N);
    vector<int>vecb(N);
    for(long long i=0;i<N;i++){
        cin>>veca.at(i);
    }
    for(long long i=0;i<N;i++){
        cin>>vecb.at(i);
    }
    long long sum=0;
    for(long long i=0;i<N;i++){
        sum+=veca.at(i)*vecb.at(i);
    }
    if(sum==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}