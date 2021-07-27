#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,M;
    cin>>N>>M;
    vector<vector<long long>>vec(N,vector<long long>(M));
    long long sum=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>vec.at(i).at(j);
        }
    }

    for(int i=0;i<M;i++){
        for(int j=i;j<M;j++){
        long long summ=0;
            for(int k=0;k<N;k++){
                summ+= max(vec.at(k).at(j),vec.at(k).at(i));
        }
        sum=max(sum,summ);
     }
    }
    cout<<sum<<endl;
}