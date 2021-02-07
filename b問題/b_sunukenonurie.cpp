#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int W,H,N;
    cin>>W>>H>>N;
    vector<vector<int>>vec(H,vector<int>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            vec.at(i).at(j)=1;
        }
    }
    for(int i=0;i<N;i++){
        int x,y,a;
        cin>>x>>y>>a;
        if(a==1){
        for(int i=0;i<H;i++){
        for(int j=0;j<x;j++){
            vec.at(i).at(j)=0;
           }
         }
        }
        else if(a==2){
        for(int i=0;i<H;i++){
          for(int j=x;j<W;j++){
            vec.at(i).at(j)=0;
           }
         }            
        }
        else if(a==3){
        for(int i=0;i<y;i++){
          for(int j=0;j<W;j++){
            vec.at(i).at(j)=0;
           }
         }            
        }
        else if(a==4){
        for(int i=y;i<H;i++){
          for(int j=0;j<W;j++){
            vec.at(i).at(j)=0;
           }
         }            
        }
     }
    int count=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(vec.at(i).at(j)==1){
                count++;
            }
        }
    }
    cout<<count<<endl;
}  