#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<string> b(N);
    for(int i=0; i<N;++i){
        cin >> b.at(i);
    }


int M;
cin >> M;
vector<string> r(M);
for(int i=0;i<M; ++i){
    cin >>r.at(i);
}

int ans=0;//しっかり０で定義しないとくらべられない
for(int i=0;i<N;++i){
    int tmp=1;//毎回TMPが１になってANWERとたたかってる
    for(int j=i+1;j<N;++j){
        if(b.at(i) == b.at(j)) ++tmp;
    }
    for(int j=0; j<M;++j){
        if(b.at(i)==r.at(j)) --tmp;
    }
    if(ans<tmp) {ans=tmp;}
}
cout << ans <<endl;
    
  
    


}
