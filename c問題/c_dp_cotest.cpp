#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    int count=0;
    vector<vector<bool>>dp(N+1,vector<bool>(100010));
        dp.at(0).at(0)=true;
    for(int i=0;i<N;i++){
        for(int j=0;j<100000;j++){
            if(dp.at(i).at(j)){
                dp.at(i+1).at(j)=true;
                dp.at(i+1).at(j+vec.at(i))=true;
            }
        }
    }
    int ans =0;
    for(int i=0;i<100010;i++){
        if(dp.at(N).at(i)){
            ans++;
        }
    }
    cout<<ans<<endl;
}