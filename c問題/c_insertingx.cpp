#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    long long count=0;
    while(1){
        if(s.size()==1||s.size()==0){
            break;
        }
        if(s.at(0)==s.at(s.size()-1)){
            s.erase(s.size()-1,1);
            s.erase(0,1);           
        }
        else if(s.at(0)=='x'){
            string t="";
            t+=s;
            t+='x';
            s=t;
            count++;
        }
        else if(s.at(s.size()-1)=='x'){
            string t="";
            t+='x';
            t+=s;
            s=t;
            count++;
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<count<<endl;
    
}