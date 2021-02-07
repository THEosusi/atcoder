#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >>N;
    long long a=1;
    long long b=1;
    long long c=1;
    long long mod=1000000007;
    for(int i=0;i<N;i++){
        a*=9;
        if(a>mod){
            a%=mod;
        }
    }
       a*=2;
        if(a>mod){
            a%=mod;
        }
    for(int i=0;i<N;i++){
        b*=8;
            if(b>mod){
            b%=mod;
        }
    }
    for(int i=0;i<N;i++){
        c*=10;
        if(c>mod){
            c%=mod;
        }
    }
     int d=c-a+b;
     if(d<0){
         d+=mod;
     }
     cout <<d<<endl;

}