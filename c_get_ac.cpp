#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    string S;
    cin>>S;
    int c[N];
    c[0]=0;
    for(int i=1;i<N;i++){
        c[i]=c[i-1];
        if(S[i]=='C'&&S[i-1]=='A') c[i]++;
    }
    for(int i=0;i<Q;i++){
        int l,r;
        cin>>l>>r;
        cout<<c[r-1]-c[l-1]<<endl;
    }
}