#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<vector<int>>vec(3,vector<int>(3));
    bool OK=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >>vec.at(i).at(j);
        }
    }
    for(int i=0;i<3;i++){
        int AA=999;
        for(int j=0;j<3;j++){
            AA=min(AA,vec.at(i).at(j));
        }
        for(int j=0;j<3;j++){
         vec.at(i).at(j)-=AA;
        }
    }
        for(int j=0;j<3;j++){
            if(vec.at(0).at(j)!=vec.at(1).at(j)||vec.at(1).at(j)!=vec.at(2).at(j)){
                OK=false;
            }
        }
        if(OK){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    
}