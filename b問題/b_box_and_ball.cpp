#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M;
    cin>>N>>M;
    long long count=1;
    long long  aka=0;
    vector<long long>vec(1000000,1);
     set<long long>set1;
     set1.insert(0);
    for(long long i=0;i<M;i++){
        long long A,B;
        cin>>A>>B;
        if(set1.count(A-1)){
            set1.insert(B-1);
        }
        vec.at(A-1)--;
        vec.at(B-1)++;
        if(vec.at(A-1)==0){
            set1.erase(A-1);
        }
    }
    cout<<set1.size()<<endl;
}