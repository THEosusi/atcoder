#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long X,K,D;
    cin>>X>>K>>D;
    long long n=abs(X)/D;

     if(K<=n){
         cout<<abs(abs(X)-K*D)<<endl;
     }
     else if(K>n){
         if((K-n)%2==1){
        cout<<abs(abs(X)-(n+1)*D)<<endl;
         }
         else{
             cout<<abs(abs(X)-n*D)<<endl;
         }

     }
}
    