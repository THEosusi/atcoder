#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main(){
    int N,M;
    cin>>N>>M;
    vector<bool>aaaa(1000001,true);
    vector<int>dp(10000001,0);
    for(int i=0;i<M;i++){
        int a;
        cin>>a;
        aaaa.at(a)=false;
    }
    dp.at(0)=1;
    if(aaaa.at(1)){
        dp.at(1)=1;
    }
    for(int n=2;n<=N;n++){
        if (aaaa.at(n-1)) dp.at(n) += dp.at(n-1); // n-1 段目が安全なら
        if (aaaa.at(n-2)) dp.at(n) += dp.at(n-2); // n-2 段目が安全なら
        dp.at(n) %= MOD; // 1000000007 で割る
    }
    cout<<dp.at(N)<<endl;
}