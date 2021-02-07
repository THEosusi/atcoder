#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W;
    cin>>H>>W;
    vector<vector<char>>vec(H,vector<char>(W));
    vector<int>kiroku(H+W-1,0);
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>vec.at(i).at(j);
            if(vec.at(i).at(j)=='#'){
                kiroku.at(i+j)++;
            }
        }
    }
    for(int i=0;i<H+W-1;i++){
        if(kiroku.at(i)==1){
            continue;
        }
        else{
       cout<<"Impossible"<<endl;
       return 0;
        }
    }
    cout<<"Possible"<<endl;
}