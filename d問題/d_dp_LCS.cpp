#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,T;
    cin>>S>>T;
    vector<vector<int>>dp(S.size()+1,vector<int>(T.size()+1));
    dp.at(0).at(0)=0;
    for(int i=0;i<S.size();i++){
        for(int j=0;j<T.size();j++){
            if(S.at(i)==T.at(j)){
                dp.at(i+1).at(j+1)=dp.at(i).at(j)+1;
            }
            else{
                dp.at(i+1).at(j+1)=max(dp.at(i).at(j+1),dp.at(i+1).at(j));
            }

        }
    }
    string aaa;
    int a=S.size();
    int b=T.size();
    while(a>0&&b>0)
    {
        if(dp[a][b]==dp[a-1][b])
            a--;
        else if(dp[a][b]==dp[a][b-1])
            b--;
        else
        {
            a--;
            b--;
            aaa=aaa+S[a];
        }
    }
    reverse(aaa.begin(),aaa.end());
    cout << aaa << endl;


}