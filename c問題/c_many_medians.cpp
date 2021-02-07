#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   vector<long long>vec(N);
    vector<long long>vec2(N);
   for(long long i=0;i<N;i++){
       cin>>vec.at(i);
       vec2.at(i)=vec.at(i);

   }
   sort(vec.begin(),vec.end());
   long long a=vec.at(N/2-1);
   long long b=vec.at(N/2);
   for(long long i=0;i<N;i++){
       if(vec2.at(i)>=b){
           cout<<a<<endl;
       }
       else{
           cout<<b<<endl;
       }
   }
}
  