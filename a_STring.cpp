#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin>>S;
    long long SS=0;
    long long TT=0;
    for(int i=0;i<S.size();i++){
        if(S.at(i)=='S'){
            SS++;
        }
        else if(S.at(i)=='T'){
            if(SS==0){
                TT++;
            }
            else{
                SS--;
            }
        }
    }
    cout<<SS+TT<<endl;
}