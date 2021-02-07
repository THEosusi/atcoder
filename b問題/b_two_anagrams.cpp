#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s,t;
    cin >>s>>t;
    bool aa = false;
    bool ab = true;
    if(s.size()<t.size()){
        aa = true;
    }
    if(aa){
        string a=s,b=t;
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
           if(a.at(i)!=b.at(i)){
               ab =false;
           }
        }
        if(ab){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    reverse(t.begin(),t.end());
    for(int i=0;i<min(t.size(),s.size());i++){
        if(s.at(i)<t.at(i)){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}