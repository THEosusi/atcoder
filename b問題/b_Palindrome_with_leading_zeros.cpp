#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t="";
    string a="";
    bool zero=false;
    int memo=s.size()-1;
    if(s=="0"){
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=s.size()-1;0<=i;i--){
        if(s.at(i)=='0'&&zero==false){
            continue;
        }
        if(s.at(i)!='0'&&zero==false){
            memo=i;
            zero=true;
            continue;
        }
    }
    for(int i=memo;0<=i;i--){
        t+=s.at(i);
    }
    for(int i=0;i<=memo;i++){
        a+=s.at(i);
    }
    if(a==t){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}