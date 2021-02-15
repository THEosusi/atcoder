#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    vector<vector<long long>>dp(1000000,vector<long long>(2));
    dp.at(0).at(0)=0;//0,1は自分の番のやつを操作したときのやつつまり次の番号がないと操作できない、（2個同時操作のため）
    dp.at(0).at(1)=-99999999;
    for(long long i=0;i<N;i++){
        dp.at(i+1).at(0)=max(dp.at(i).at(0)+vec.at(i),dp.at(i).at(1)-vec.at(i));
        dp.at(i+1).at(1)=max(dp.at(i).at(0)-vec.at(i),dp.at(i).at(1)+vec.at(i));
    }
    long long aaa=dp.at(N).at(0);//最後はNを操作できないためもうこれが答え。
    cout<<aaa<<endl;
}