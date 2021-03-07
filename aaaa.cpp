#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin>>S;
    long long kazu=S.size();
    string a,b,c;
    if(kazu%2==0){
        for(long long i=0;i<kazu/2;i++){
            a+=S.at(2*i);
        }
        for(long long i=0;i<kazu/2;i++){
            b+=S.at(2*i+1);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(long long i=0;i<kazu/2;i++){
            c+=a.at(i);
            c+=b.at(i);
        }
    }
    else{
        for(long long i=0;i<kazu/2;i++){
            a+=S.at(2*i);
        }
           a+=S.at(kazu-1);
        for(long long i=0;i<kazu/2;i++){
            b+=S.at(2*i+1);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(long long i=0;i<kazu/2;i++){
            c+=a.at(i);
            c+=b.at(i);
        }
            c+=a.at(a.size()-1);
    }
    cout<<c<<endl;
    return 0;
}