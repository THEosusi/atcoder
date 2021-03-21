#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string answer="";
    for(int i=0;i<s.size();i++){
        if(s.at(i)=='.'){
            break;
        }
        else{
            answer+=s.at(i);
        }
    }
    cout<<answer<<endl;
}