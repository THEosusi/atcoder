#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin>>S;
    reverse(S.begin(),S.end());
    string a="maerd";
    string b="remaerd";
    string c="esare";
    string d="resare";
    while(1){
        if(S==""){
            break;
        }
        if(S.substr(0,5)==a||S.substr(0,5)==c){
            S.replace(0,5,"");
        }
        else if(S.substr(0,6)==d){
            S.replace(0,6,"");
        }
        else if(S.substr(0,7)==b){
            S.replace(0,7,"");
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}