#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin>>S;
    string T;
    for(int i=0;i<S.size();i++){
        if(S.at(i)=='6'){
            T+='9';
        }
        else if(S.at(i)=='9'){
            T+='6';
        }
        else{
            T+=S.at(i);
        }
    }
    reverse(T.begin(),T.end());
    cout<<T<<endl;
}