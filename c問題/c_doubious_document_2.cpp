#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S,T;
    cin>>S>>T;
    int a=S.size(),b=T.size();
    int count=0;
    int c,d;
    for(int i=0;i<=a-b;i++){
        for(int j=0;j<b;j++){
            if(S.at(i+j)==T.at(j)||S.at(i+j)=='?'){
                if(j==b-1){
                    count=1;
                    c=i;
                    d=j;
                    break;
                }
            }
            else{
                break;
            }
        }
    }
    if(count==0){
        cout<<"UNRESTORABLE"<<endl;
    }
    else{
        string kotae;
        for(int i=0;i<a;i++){
            if(i==c){
                kotae+=T;
                i=d+c;
                continue;
            }
            if(S.at(i)=='?'){
                kotae+='a';
            }
            else{
                kotae+=S.at(i);
            }
            
            
        }
        cout<<kotae<<endl;
    }
}