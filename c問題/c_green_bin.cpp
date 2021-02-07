#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<string> vec(N);
    for(long long i=0;i<N;i++){
       string ab;
       cin>>ab;
        sort(ab.begin(),ab.end());
        vec.at(i)=ab;
    }
    sort(vec.begin(),vec.end());
    string AAA = vec.at(0);
    long long count=1;
    long long sum=0;
    for(long long i=1;i<N;i++){
        if(i==N-1){
            if(AAA==vec.at(i)){
                count++;
            }
            if(count>=2){
                sum+=count*(count-1)/2;
            }
         }
        else{
        if(AAA==vec.at(i)){
            count++;
        }
        else{
            AAA=vec.at(i);
            if(count>=2){
                sum+=count*(count-1)/2;
            }
            count=1;
           }
        }
    }
    cout<<sum<<endl;
}