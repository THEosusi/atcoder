#include <bits/stdc++.h>
using namespace std;
 long long mod=1000000007;
int main() {
    int N;
    cin>>N;
    vector<int>vec(100100,0);
    long long answer=1;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        vec.at(a)++;
    }
    if(N%2==0){
        for(int i=0;i<N;i++){
            if(i%2==0){
                if(vec.at(i)!=0){
                    cout<<0<<endl;
                    return 0;
                }
            }
            else{
                if(vec.at(i)!=2){
                    cout<<0<<endl;
                    return 0;
                }
            }
        }
        for(int i=0;i<N/2;i++){
            answer*=2;
            answer%=mod;
        }
    }
    else {
        for(int i=0;i<N;i++){
            if(i==0){
                if(vec.at(i)!=1){
                     cout<<0<<endl;
                    return 0;                   
                }
            }
            else{
                if(i%2==1){
                if(vec.at(i)!=0){
                    cout<<0<<endl;
                    return 0;
                }
            }
            else{
                if(vec.at(i)!=2){
                    cout<<0<<endl;
                    return 0;
                }
            }
            }
        }
        for(int i=0;i<(N-1)/2;i++){
            answer*=2;
            answer%=mod;
        }
    }
    cout<<answer<<endl;
}