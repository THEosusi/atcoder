#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    vector<long long>vec2(200001);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long count=0;
    for(int i=0;i<N;i++){
        vec2.at(vec.at(i))++;
         if(vec.at(i)<=count){
        for(int j=count;j<200001;j++){
            if(vec2.at(j)==0){
                count =j;
                cout<<j<<endl;
                break;
            }
         }
        }
        else{
            cout<<count<<endl;
        }
    }

}