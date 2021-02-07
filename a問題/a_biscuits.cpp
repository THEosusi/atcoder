#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,P;
    cin>>N>>P;
    int amari0=0,amari1=0;
    long long sum=1;
    for(int i=0;i<N;i++){
        int A;
        cin>>A;
        if(A%2==0){
            amari0++;
        }
        else{
            amari1++;
        }
    }
    if(amari1==0){
        if(P==0){
        for(int i=1;i<=N;i++){
            sum*=2;
        }
        cout<<sum<<endl;
        return 0;
        }
        else{
        cout<<0<<endl;
        return 0; 
        }        
    }
    if(P%2==0){
        for(int i=1;i<=amari0+amari1-1;i++){
            sum*=2;
        }
        cout<<sum<<endl;
    }
    else{
        for(int i=1;i<=amari0+amari1-1;i++){
            sum*=2;
        }
        cout<<sum<<endl;     
    }


}