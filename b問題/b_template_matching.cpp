#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    vector<vector<char>>vec1(N,vector<char>(N));
    vector<vector<char>>vec2(M,vector<char>(M));   
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>vec1.at(i).at(j);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>vec2.at(i).at(j);
        }
    }
    for(int i=0;i<=N-M;i++){
        for(int j=0;j<=N-M;j++){
            bool aiu=false;
            for(int k=0;k<M;k++){
                for(int l=0;l<M;l++){
                    if(vec2.at(k).at(l)==vec1.at(k+i).at(l+j)){
                        if(k==M-1&&l==M-1){
                            cout<<"Yes"<<endl;
                            return 0;
                        }
                    }
                    else{
                        aiu=true;
                        break;
                    }
                }
                if(aiu){
                    break;
                }
            }
        }
    }
    cout<<"No"<<endl;    
}