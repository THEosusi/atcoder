#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    if(N==1){
        cout<<s<<endl;
        return 0;
    }
    string a=s;
    for(int i=1;i<N;i++){
        string t;
        cin>>t;
        sort(t.begin(),t.end());
        int o=0;
       string b="";
        for(int k=0;k<a.size();k++){
            for(int j=o;j<t.size();j++){
                if(a.at(k)==t.at(j)){
                    o=j+1;
                    b+=a.at(k);
                    break;
                }
            }
        }
        a=b;
    }
    cout<<a<<endl;
}