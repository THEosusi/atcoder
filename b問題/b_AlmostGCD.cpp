#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    int count=0;
    int maxGDC=0;
    for(int i=2;i<=1000;i++){
        int GDC=0;
    for(int j=0;j<N;j++){
        if(vec.at(j)%i==0){
            GDC++;
        }
      }
     if(GDC>=maxGDC){
         maxGDC=GDC;
            count=i;
     }
    }
    cout<<count<<endl;
}