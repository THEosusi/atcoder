#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    long long M;
    cin>>N>>M;
    if(M==0){
        cout<<1<<endl;
        return 0;
    }
    vector<long long>vec(M);
    for(long long i=0;i<M;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    long long aida=111111111111111;
    long long totyu=0;
    for(long long i=0;i<M;i++){
        if(vec.at(i)-totyu-1!=0){
            aida=min(aida,vec.at(i)-totyu-1);
        }
        totyu=vec.at(i);
    }
    if(N!=vec.at(M-1)){
        aida=min(N-vec.at(M-1),aida);
    }
     totyu=0;
     long long sum=0;
    for(long long i=0;i<M;i++){
        if(vec.at(i)-totyu-1!=0&&(vec.at(i)-totyu-1)%aida==0){
            sum+=(vec.at(i)-totyu-1)/aida;
        }
        else if(vec.at(i)-totyu-1!=0&&(vec.at(i)-totyu-1)%aida!=0){
            sum+=(vec.at(i)-totyu-1)/aida+1;
        }
        totyu=vec.at(i);
    }
    if(N!=vec.at(M-1)&&((N-vec.at(M-1))%aida==0)){
        sum+=(N-vec.at(M-1))/aida;
    }
    else if(N!=vec.at(M-1)&&((N-vec.at(M-1))%aida!=0)){
        sum+=(N-vec.at(M-1))/aida+1;
    }
    cout<<sum<<endl;
}

