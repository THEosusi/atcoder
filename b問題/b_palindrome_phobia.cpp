#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int counta=0,countb=0,countc=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i)=='a'){
            counta++;
        }
        else if(s.at(i)=='b'){
            countb++;
        }
        else{
            countc++;
        }
    }
    if((max(max(counta,countb),countc)-min(min(counta,countb),countc))<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}