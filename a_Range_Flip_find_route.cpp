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
    dp.at(0).at(0)=0;
    if(vec.at(0).at(0)=='#'){
        dp.at(0).at(0)=1;
    }
    for(int i=1;i<H;i++){
        if(vec.at(i).at(0)=='#'){
             dp.at(i).at(0)=dp.at(i-1).at(0)+1;
        }
        else{
            dp.at(i).at(0)=dp.at(i-1).at(0);
        }
    }
    cout<< dp.at(H-1).at(0)<<endl;
   for(int i=1;i<W;i++){
        if(vec.at(0).at(i)=='#'){
             dp.at(0).at(i)=dp.at(0).at(i-1)+1;
        }
        else{
            dp.at(0).at(i)=dp.at(0).at(i-1);
        }
    }
    for(int i=1;i<H;i++){
        for(int j=1;j<W;j++){
            if(vec.at(i).at(j)=='#'){
                dp.at(i).at(j)=min(vec.at(i-1).at(j),vec.at(i).at(j-1))+1;
            }
            else{
                dp.at(i).at(j)=min(vec.at(i-1).at(j),vec.at(i).at(j-1));
            }
        }
    }
    cout<<dp.at(H-1).at(W-1)<<endl;
}