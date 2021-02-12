#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin>>S;
    int n=S.size();
    vector<int>vec(S.size());
    for(int i=0;i<S.size();i++){
        vec.at(i)=S.at(i)-'0';
    }
    int maxx=21;
    for(int bit=0;bit<(1<<n);++bit){
        int itizi=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                itizi+=vec.at(i);
            }
            else{
                count++;
            }
        }
        if(itizi%3==0){
            maxx=min(maxx,count);
        }
    }
    if(maxx==n){
        cout<<-1<<endl;
    }
    else{
        cout<<maxx<<endl;
    }
}