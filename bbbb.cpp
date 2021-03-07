#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long a=-20000000000,b=-20000000000;
    int t=0;
    int aaa=0;
    for(long long i=0;i<N;i++){
        a=max(a,vec.at(i));
    }
    for(long long i=0;i<N;i++){
        if(a==vec.at(i)){
            t++;
        }
    }
    if(t==1){
        aaa=1;
        for(long long i=0;i<N;i++){
            if(a!=vec.at(i)&&vec.at(i)>=b){
                b=vec.at(i);
            }
        }
    }
    else{
        b=a;
    }
    if(aaa==1){
        for(long long i=0;i<N;i++){
            if(vec.at(i)!=a){
                cout<<a<<endl;
            }
            else{
                cout<<b<<endl;
            }
        }
    }
    else{   
        for(long long i=0;i<N;i++){
            cout<<a<<endl;
        }
    }
    return 0;
}