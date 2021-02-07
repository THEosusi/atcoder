#include <bits/stdc++.h>
using namespace std;
 
int main() {    
    int N;
    cin>>N;
    vector<int>a(N);
    vector<int>b(N);
    vector<int>c(N);
    for(int i=0;i<N;i++){
        cin>>a.at(i)>>b.at(i)>>c.at(i);
    }
    vector<vector<int>>dp(1000000,vector<int>(3));
    for(int i=0;i<N;i++){
        dp.at(i+1).at(0)=max(dp.at(i).at(1)+a.at(i),dp.at(i).at(2)+a.at(i));
        dp.at(i+1).at(1)=max(dp.at(i).at(0)+b.at(i),dp.at(i).at(2)+b.at(i));
        dp.at(i+1).at(2)=max(dp.at(i).at(0)+c.at(i),dp.at(i).at(1)+c.at(i));
    }
    long long aaa=max(max(dp.at(N).at(0),dp.at(N).at(1)),dp.at(N).at(2));
    cout<<aaa<<endl;
}