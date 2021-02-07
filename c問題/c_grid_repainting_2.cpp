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
    bool AAA=true;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(vec.at(i).at(j)=='#'){
                     if(i-1>=0&&vec.at(i-1).at(j)=='#'){
                         continue;
                       }
                     if(j-1>=0&&vec.at(i).at(j-1)=='#'){
                         continue;
                        }
                     if(i+1<H&&vec.at(i+1).at(j)=='#'){
                         continue;
                     }
                     if(j+1<W&&vec.at(i).at(j+1)=='#'){
                         continue;
                     }
                      AAA=false;
                    }
                }
            }
    if(AAA){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}