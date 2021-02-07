#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    set<char> SS;
    for(int i=0;i<s.size();i++){
        SS.insert(s.at(i));
    }
    int minn=999; 
    for(auto a : SS){
        int count=0;
        int maxx=0;
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1){
            if(a!=s.at(i)){
                count++;
                maxx=max(count,maxx);
                continue;
            }
            else{
                maxx=max(count,maxx);
                count=0;
                continue;
            } 
            }
            if(a!=s.at(i)){
                count++;
            }
            else{
                maxx=max(count,maxx);
                count=0;
            }
        }
        minn=min(minn,maxx);
    }
    cout<<minn<<endl;
}