#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W;
    cin>> H >> W;
    vector <vector<char>> masu (H,vector<char>(W));
    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
        char temp;
        cin >> temp;
        if(temp=='#'){masu.at(i).at(j)='#';
                }
        else {masu.at(i).at(j)='0';
            }
        }
    }
 

//すべてのマスを参照
for(int i=0;i<H;++i){
    for(int j=0;j<W;++j){
        if(masu.at(i).at(j)=='#') continue;
        //masu.at(i).at(j)の周りのマスをmasu.at(y).at(x)で参照
        for(int y=i-1;y<=i+1;y++){
            for(int x=j-1;x<=j+1;++x){
                //マスからはみ出てないかチェック
                //forが４つあるので一回かうんとしたとこもかばーできるのでは
                if(0<=y&& y<H && 0<=x && x<W){
                    if(masu.at(y).at(x)=='#'){
                        ++masu.at(i).at(j);
                    }
                }
            }
        }
    }
}
 for(int i=0; i<H; ++i){
        for(int j=0; j<W; ++j){
            cout << masu.at(i).at(j);
        }
        cout << endl;
 }
}
 

