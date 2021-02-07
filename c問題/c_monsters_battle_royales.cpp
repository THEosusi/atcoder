#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
    long long kiroku=10000000001;
    int       bango=0;
    long long count=0;
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
        if(vec.at(i)<kiroku){
            kiroku=vec.at(i);
            bango=i;
        }
    }
    for(int i=0;i<1000;i++){
        for(int j=0;j<N;j++){
            if(bango!=j){
                vec.at(j)%=kiroku;
            }
            else{
                continue;
            }
        }
        for(int j=0;j<N;j++){
            if(vec.at(j)==0){
                count++;
                if(count==N-1){
                    cout<<kiroku<<endl;
                    return 0;
                }
            }
        if(vec.at(j)<kiroku&&vec.at(j)!=0){
            kiroku=vec.at(j);
            bango=j;
         }            
        }
        count=0;
    }
}