#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin>>S;
    bool aaa=true;
    for(int i=0;i<S.size();i++){
        if(i%2==0){
            if(isupper(S.at(i))){
            aaa=false;
            break;
            }
        }
        if(i%2==1){
            if(islower(S.at(i))){
            aaa=false;
            break;
            }
        }
    }
    if(aaa){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}