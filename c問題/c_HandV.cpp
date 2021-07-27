#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W,K;
    cin>>H>>W>>K;
    int kekka=0;
    vector<vector<char>>vec1(H,vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>vec1.at(i).at(j);
        }
    }

    for (int bit = 0; bit < (1<<H); ++bit)
    {
        vector<int> S;
        for (int i = 0; i < H; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                S.push_back(i);
            }
        }
        for (int bitt = 0; bitt < (1<<W); ++bitt)
        {
        vector<vector<char>>vec(H,vector<char>(W));
        for(int n=0;n<H;n++){
            for(int m=0;m<W;m++){
                vec.at(n).at(m)=vec1.at(n).at(m);
            }
        }
        vector<int> T;
        for (int j = 0; j < W; ++j) {
            if (bitt & (1<<j)) { // i が bit に入るかどうか
                T.push_back(j);
            }
         }
        
        for(int q=0;q<S.size();q++){
            for(int e=0;e<W;e++){
            if(vec.at(S.at(q)).at(e)=='.'){
                vec.at(S.at(q)).at(e)='#';
            }
            if(vec.at(S.at(q)).at(e)=='#'){
                vec.at(S.at(q)).at(e)='.';
            }
            }
            }
            for(int w=0;w<T.size();w++){
            for(int e=0;e<H;e++){
            if(vec.at(e).at(T.at(w))=='.'){
                vec.at(e).at(T.at(w))='#';
                }
                if(vec.at(e).at(T.at(w))=='#'){
                vec.at(e).at(T.at(w))='.';
                    }
                    }
            }
                    int count=0;
                for(int y=0;y<H;y++){
                    for(int x=0;x<W;x++){
                    if(vec.at(y).at(x)=='#'){
                 count++;
                    }               
                 }
            }
            if(count==K){
             kekka++;
            }
        }
    }
    cout<<kekka<<endl;

}