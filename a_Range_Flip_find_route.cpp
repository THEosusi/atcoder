#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W;
    cin>>H>>W;
    vector<vector<char>>vec(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>vec.at(i).at(j);
        }
    }
    vector<vector<int>>dp(H,vector<int>(W));
        for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            dp.at(i).at(j)=1000000;
        }
    }
    dp.at(0).at(0)=0;
    if(vec.at(0).at(0)=='#'){
        dp.at(0).at(0)=1;
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(j>=1){
                if(vec.at(i).at(j)=='#'&&vec.at(i).at(j-1)=='.'){
                    dp.at(i).at(j)=min(dp.at(i).at(j),dp.at(i).at(j-1)+1);
                }
                else{
                     dp.at(i).at(j)=min(dp.at(i).at(j-1),dp.at(i).at(j));
                }
            }
            if(i>=1){
                if(vec.at(i).at(j)=='#'&&vec.at(i-1).at(j)=='.'){
                     dp.at(i).at(j)=min(dp.at(i).at(j),dp.at(i-1).at(j)+1);
                }
                else{
                    dp.at(i).at(j)=min(dp.at(i-1).at(j),dp.at(i).at(j));                    
                }
            }
        }
    }
    cout<<dp.at(H-1).at(W-1)<<endl;
}