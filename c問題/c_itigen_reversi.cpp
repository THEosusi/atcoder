#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    char a=s.at(0);
    long long count=0;
    for(int i=1;i<s.size();i++){
        if(a!=s.at(i)){
            count++;
            a=s.at(i);
        }
    }
    cout<<count<<endl;
}