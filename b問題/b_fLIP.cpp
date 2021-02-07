#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M,K;
    cin>>N>>M>>K;
    for(long long i=0;i<=N;i++){
        for(long long j=0;j<=M;j++){
            if(i*(M-j)+(N-i)*j==K){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}