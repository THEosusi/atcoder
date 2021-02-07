#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    long long K;
    cin >>s>>K;
    char t=s.at(0);
    int count=1;
    long long summ=0;
    if(s.at(0)!=s.at(s.size()-1)){
    for(int i=1;i<s.size();i++){
        if(i==s.size()-1){
            if(s.at(i)==t){
            count++;
        }
            summ+=count/2;        
        }
        else{
        if(s.at(i)==t){
            count++;
        }
        else{
            summ+=count/2;
            t=s.at(i);
            count=1;
          }
        }
    }
    cout<<summ*K<<endl;
    }
    else{
        int cc=1;
        if(s.size()==1){
            cout<<s.size()*K/2<<endl;
            return 0;
        }
        for(int i=1;i<s.size();i++){
            if(s.at(i)==t){
                cc++;
                if(cc==s.size()){
                    long long aaa=s.size()*K/2;
                    cout<<aaa<<endl;
                    return 0;
                }
            }
        }
        int keisoku=1;
    for(int i=1;i<s.size();i++){
        if(t==s.at(i)){
            keisoku++;
        }
        else{
            break;
        }
    }
    string o=s;
        int keisokuo=1;
    reverse(o.begin(),o.end());
    for(int i=1;i<o.size();i++){
        if(t==o.at(i)){
            keisokuo++;
        }
        else{
            break;
        }
    }
    
    for(int i=1;i<s.size();i++){
        if(i==s.size()-1){
            if(s.at(i)==t){
            count++;
        }
            summ+=count/2;        
        }
        else{
        if(s.at(i)==t){
            count++;
        }
        else{
            summ+=count/2;
            t=s.at(i);
            count=1;
          }
        }
    }
    cout<<(summ-(keisoku/2)-(keisokuo/2))*K+((keisokuo+keisoku)/2)*(K-1)+(keisokuo/2)+(keisoku/2)<<endl;
    }
}