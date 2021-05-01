#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int count=0;
    vector<int>vecA(N);
    vector<int>vecB(N);
    vector<int>vec(1001);
     for(int i=0;i<N;i++){
         int C;
         cin>>C;
         vecA.at(i)=C;
    }
     for(int i=0;i<N;i++){
         int D;
         cin>>D;
         vecB.at(i)=D;
    }      
    for(int i=0;i<N;i++){
        for(int j=vecA.at(i);j<=vecB.at(i);j++){
            vec.at(j)++;
        }
    }
    for(int i=0;i<1001;i++){
        if(N==vec.at(i)){
            count++;
        }
    }
    cout<<count<<endl;
}