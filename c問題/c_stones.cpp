#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    string S;
    cin>>N>>S;
    long long kuro=0;
    long long siro=0;
    for(long long i=0;i<N;i++){
        if(S.at(i)=='#'){
        kuro++;
    }
    else{
        siro++;
     }
    }
    long long count=siro;
    long long AA=count;
    for(long long i=0;i<N;i++){
        if(S.at(i)=='#'){
            AA++;
        }
        else{
            AA--;
        }
        count=min(AA,count);
    }
    count=min(kuro,min(count,siro));
    cout<<count<<endl;
}