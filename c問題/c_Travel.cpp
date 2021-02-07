#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    long long K;
    cin>>N>>K;
    vector<vector<long long>>vec(N,vector<long long>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>vec.at(i).at(j);
        }
    }
    vector<int>index;
    for(int i=0;i<N-1;i++){
        index.push_back(i+1);
    }
    long long ans=0;
    do{
       long long dis =0;
       long long from =0;
       for(int i=0;i<index.size();i++){
           dis += vec.at(from).at(index.at(i));
           from =index.at(i);
       }
       dis += vec.at(index.back()).at(0);
       if(dis ==K){
           ans++;
       }
    }while(next_permutation(index.begin(),index.end()));
    cout<<ans<<endl;
}