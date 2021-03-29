#include <bits/stdc++.h>
using namespace std;
int main() {
    int H,W;
    cin>>H>>W;
    vector<vector<char>>vec(H,vector<char>(W));
    int X,Y;
    cin>>X>>Y;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>vec.at(i).at(j);
        }
    }
    int count=0;
    for(int i=Y-1;0<=i;i--){
        if(vec.at(X-1).at(i)=='.'){
            count++;
        }
        else{
            break;
        }
    }
    for(int i=Y-1;i<W;i++){
        if(vec.at(X-1).at(i)=='.'){
            count++;
        }
        else{
            break;
        }
    }
    for(int i=X-1;0<=i;i--){
        if(vec.at(i).at(Y-1)=='.'){
            count++;
        }
        else{
            break;
        }
    }
    for(int i=X-1;i<H;i++){
        if(vec.at(i).at(Y-1)=='.'){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count-3<<endl;
}