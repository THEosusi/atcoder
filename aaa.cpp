#include <bits/stdc++.h>
using namespace std;
int  combination(int n, int r) {
  vector<vector<int >> v(n+1, vector<int>(n+1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v[n][r];
} 


int main() {
  double sum=0;
  double aa;
for(int i=1000;i<=3000;i++){
  aa=0;
  aa=+log(combination(3000,i));
  aa+=log((1/2))*3000;
  sum+=aa;
}
cout<<aa<<endl;
}


