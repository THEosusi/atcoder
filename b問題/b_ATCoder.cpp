#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin >>S;
    int N=S.size();
    vector<int>vec(N,0);
    int count=0;
for(int i=0;i<N;i++){
    if(S.at(i)=='A'||S.at(i)=='C'||S.at(i)=='G'||S.at(i)=='T'){
      count ++;
      vec.at(i)=count;
    }
    else{
        count=0;
        vec.at(i)=count;
    }

    }
        sort(vec.begin(),vec.end());
    cout << vec.at(N-1)<<endl;
}