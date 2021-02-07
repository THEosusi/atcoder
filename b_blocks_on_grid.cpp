#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W;
    cin>>H>>W;
    vector<vector<int>>vec(H,vector<int>(W));
    int aaa=1111;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>vec.at(i).at(j);
            if(aaa>vec.at(i).at(j)){
                aaa=vec.at(i).at(j);
            }
        }
    }
    int sum=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            sum+=vec.at(i).at(j)-aaa;
        }
    }
    cout<<sum<<endl;
}