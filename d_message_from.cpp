#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin>>S;
    bool a=false;
    char b='A';
    char c='A';
    string T="",U="";
    for(long long i=0;i<S.size();i++){
        if(S.at(i)=='R'){
            a=(!(a));
            continue;
        }
        if(T.size()>=2&&a==false&&T.at(T.size()-1)==S.at(i)){
            T.pop_back();
            b=T.at(T.size()-1);
            continue;
        }
        else if(U.size()>=2&&a==true&&U.at(U.size()-1)==S.at(i)){
            U.pop_back();
            b=U.at(U.size()-1);
            continue;            
        }
            if(a==false){
                T+=S.at(i);
                b=S.at(i);
            }
            else if(a==true){
                U+=S.at(i);
                b=S.at(i);
            }
    }
     reverse(U.begin(),U.end());  
    string AAA="";
    if(a==true){
        AAA=U+T;
        reverse(AAA.begin(),AAA.end());
    }
    else{
        AAA=U+T;
    }
    string W;
     for(int i=0;i<AAA.size();i++){
        if(W.size() && W.back() == AAA.at(i)) W.pop_back();
        else W.push_back(AAA.at(i));
    }   
    cout<<W<<endl;

}