#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    long long a=0;
    long long b=0;
    long long c=1;
    for(int i=1;i<=N;i++){
        c*=2;
    }
    long long kirokua=0;
    long long kirokub=0;
    for(long long j=0;j<c/2;j++){
        long long t;
        cin>>t;
        if(t>a){
            a=t;
            kirokua=j+1;
        }
    }
    for(long long j=0;j<c/2;j++){
        long long t;
        cin>>t;
        if(t>b){
            b=t;
            kirokub=j+1+c/2;
        }
    }
    if(a>b){
        cout<<kirokub<<endl;
    }
    else{
        cout<<kirokua<<endl;
    }
}