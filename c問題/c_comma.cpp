#include <bits/stdc++.h>
using namespace std;
int main() {
    long long S;
    cin>>S;
    long long count=0;
    if(S>=1000){
        count+=S-1000+1;
    }
    if(S>=1000000){
        count+=S-1000000+1;
    }
    if(S>=1000000000){
        count+=S-1000000000+1;
    }
    if(S>=1000000000000){
        count+=S-1000000000000+1;
    }
    if(S>=1000000000000000){
        count+=S-1000000000000000+1;
    }
    cout<<count<<endl;
}