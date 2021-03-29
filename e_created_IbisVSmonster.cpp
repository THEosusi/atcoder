#include <bits/stdc++.h>
using namespace std;
 
int main() {    
    long long H,N;
    cin>>H>>N;
    priority_queue<long long> max;
    vector<long long>dame(N);
    vector<long long>mp(N);
    for(int i=0;i<N;i++){
        cin>>dame.at(i)>>mp.at(i);
        max.push(dame.at(i));
    }
    long long AAA=max.top();
    vector<vector<long long>>dp(N+1,vector<long long>(H+1,10000000));
    dp.at(0).at(0);
    for(long long i=0;i<N;i++){
        for(long long j=0;j<H+AAA;j++){
            if(j>=dame.at(i)){
                dp[i+1][j]=min(dp.at(i+1).at(j-dame.at(i))+mp.at(i),dp[i][j]);
            }
        else{
            dp.at(i+1).at(j)=dp.at(i).at(j);
        }
        }
    }
  }