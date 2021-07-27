#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W,K;
    cin>>H>>W>>K;
    vector<vector<char>>vec(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>vec.at(i).at(j);
        }
    }
    vector<vector<int>>answer(H,vector<int>(W));
    int cake=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(vec.at(i).at(j)=='#'){
                cake++;
                answer.at(i).at(j)+=cake;
            }
        }
    }
    for(int i=0;i<H;i++){
        for(int j=1;j<W;j++){
            if(answer.at(i).at(j)==0){
                answer.at(i).at(j)=answer.at(i).at(j-1);
            }
        }
    }
    for(int i=0;i<H;i++){
        for(int j=W-2;0<=j;j--){
            if(answer.at(i).at(j)==0){
                answer.at(i).at(j)=answer.at(i).at(j+1);
            }
        }
    }

    for(int i=1;i<H;i++){
        for(int j=0;j<W;j++){
            if(answer.at(i).at(j)==0){
                answer.at(i).at(j)=answer.at(i-1).at(j);
            }
        }
    }
    for(int i=H-2;0<=i;i--){
        for(int j=0;j<W;j++){
            if(answer.at(i).at(j)==0){
                answer.at(i).at(j)=answer.at(i+1).at(j);
            }
        }
    }
     for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout<<answer.at(i).at(j)<<" ";
        }
        cout<<endl;
    }   

}