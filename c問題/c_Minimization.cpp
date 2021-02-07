#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin >>N>>K;
   long long count=0;
   long long syou=100000;
   for(long long i=0;i<N;i++){
       long long A;
       cin>>A;
       if(A<syou){
           syou=A;
           count=0;
           count++;
       }
       else if(A==syou){
           count++;
       }
   } 
   if((N-count)%(K-1)!=0){
       cout<<(N-count)/(K-1)+1<<endl;
   }
   else{
       cout<<(N-count)/(K-1)<<endl;     
   }

}