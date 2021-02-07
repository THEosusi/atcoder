#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W;
    cin >>H>>W;
    vector<vector<char>>vec(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin >>vec.at(i).at(j);
        }
    }
    int count=0;

    
    for(int i=0;i<H;i++){
         int keisoku=0;
        for(int j=0;j<W;j++){
            if(vec.at(i).at(j)=='.'){
                keisoku++;
                if(keisoku>=2){
                    count++;
                }
            }
            else{
                keisoku=0;
            }
        }
    }
    for(int i=0;i<W;i++){
         int keisoku=0;
        for(int j=0;j<H;j++){
            if(vec.at(j).at(i)=='.'){
                keisoku++;
                if(keisoku>=2){
                    count++;
                }
            }
            else{
                keisoku=0;
            }
        }
    }
    cout<<count<<endl;
}