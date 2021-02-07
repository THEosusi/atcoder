#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<bool>vec1(200050,false);
    vector<bool>vec2(200050,false);
    long long N,M;
    cin>>N>>M;
    for(long long i=0;i<M;i++){
        long long a,b;
        cin>>a>>b;
        if(a==1){
            vec1.at(b)=true;
        }
        else if (b==N){
            vec2.at(a)=true;
        }
    }
    for(long long i=0;i<200050;i++){
        if(vec1.at(i)&&vec2.at(i)){
            cout<<"POSSIBLE"<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}