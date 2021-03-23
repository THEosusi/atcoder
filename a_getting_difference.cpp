long long gcd(long long a,long long b){
 if(b == 0) return a;
 return gcd(b,a%b);
 }
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    long long K;
    cin>>N>>K;
    vector<long long>vec(N);
    bool answer=false;
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
        if(vec.at(i)%2==1){
            answer=true;
        }
    }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
    if(N==1){
        if(vec.at(0)!=K){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"POSSIBLE"<<endl;
        }
    }
    long long aa=vec.at(0);
    for(int i=1;i<N;i++){
        aa=gcd(aa,vec.at(i));
    }

    if(N!=1){
        if(K>vec.at(0)){
         cout<<"IMPOSSIBLE"<<endl;           
        }
        else if(vec.at(0)==K){
            cout<<"POSSIBLE"<<endl;            
        }
        else{
            if(K%aa==0){
              cout<<"POSSIBLE"<<endl;                      
            } 
            else{
          cout<<"IMPOSSIBLE"<<endl;                      
            }               
            
        }
    }
}