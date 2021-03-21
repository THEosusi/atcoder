#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    int a=0;
    int b=0;
    int ab=0;
    vector<int>AB(N);
    int count=0;
    for(int i=0;i<N;i++){
        string S;
        cin>>S;
        for(int j=0;j<S.size()-1;j++){
            if(S.at(j)=='A'){
                if(S.at(j+1)=='B'){
                    count++;
                }
            }
        }
        if(S.at(0)=='B'){
            AB.at(i)+=1;
        }
        if(S.at(S.size()-1)=='A'){
            AB.at(i)+=2;
        }
    }
    for(int i=0;i<N;i++){
        if(AB.at(i)==1){
            b++;
        }
        if(AB.at(i)==2){
            a++;
        }
        if(AB.at(i)==3){
            ab++;
        }
      }
    if(a==0&&b==0){
        if(ab==0){
            count+=0;
        }
        else{
            count+=ab-1;
        }
    }
    else {
        count+=ab+min(a,b);
    }
    cout<<count<<endl;
}