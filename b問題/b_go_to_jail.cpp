#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >>N;
    vector<vector<int>>vec(N,vector<int>(2));
    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            cin >>vec.at(i).at(j);
        }
    }
    int count=0;
    int maxx=0;
    for(int i=0;i<N;i++){
       if(vec.at(i).at(0)==vec.at(i).at(1)){
           count++;
           if(i==N-1){
        maxx=max(count,maxx);
           }
       }
       else{
        maxx=max(count,maxx);
           count=0;
       }
    }
    if(maxx>=3){
        cout<<"Yes"<<endl;
    }
    else{
    cout<<"No"<<endl;
    }
}
