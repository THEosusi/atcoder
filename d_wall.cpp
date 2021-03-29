#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H,W;
    cin>>H>>W;
    vector<vector<int>>vec(10,vector<int>(10));
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            cin>>vec.at(i).at(j);
        }
    }
for (int k = 0; k <=9; k++){       // 経由する頂点
    for (int i = 0; i <=9; i++) {    // 始点
      for (int j = 0; j <=9; j++) {  // 終点
        vec[i][j] = min(vec[i][j], vec[i][k] + vec[k][j]);
      }
    }
  }
     long long res = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            int A; cin >> A;
            if (A == -1) continue;
            res += vec[A][1];
        }
    } 
   cout<<res<<endl;;

}