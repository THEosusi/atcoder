#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    if(N==1){
        cout<<1<<endl;
        return 0;
    }
    long long count;
    long long nandemo;
    long long kiroku;
    bool aaaa=false;
    bool bbbb=false;
    for(long long i=1;i<10000000;i++){
        count=(1+i)*i/2;
        if(count==N){
            nandemo=i;
            aaaa=true;
            break;
        }
        else if(count>N){
            nandemo=i;
            kiroku=count-N;
            bbbb=true;
            break;
        }
    }
    if(aaaa){
        for(long long i=1;i<=nandemo;i++){
            cout<<i<<endl;
        }
    }
    if(bbbb){
        for(long long i=1;i<=nandemo;i++){
            if(kiroku==i){
                continue;
            }
            else{
                cout<<i<<endl;
            }
        }
    }
}