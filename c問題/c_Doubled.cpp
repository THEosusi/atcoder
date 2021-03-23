#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    long long count=0;
    if(s.size()%2==1){
        for(int i=1;i<=s.size()/2;i++){
            if(i==s.size()/2){
                long long aaa=0;
                long long bbb=0;
                for(int j=0;j<i;j++){
                    aaa*=10;
                    aaa+=9;
                }
               for(int j=0;j<i-1;j++){
                    bbb*=10;
                    bbb+=9;
                }                
                count+=aaa;
                count-=bbb;
            }
            else{
                long long aaa=0;
                long long bbb=0;
                for(int j=0;j<i;j++){
                    aaa*=10;
                    aaa+=9;
                }
                for(int j=0;j<i-1;j++){
                    bbb*=10;
                    bbb+=9;
                }                
                count+=aaa;
                count-=bbb;
            }
        }
    }
    else{
         for(int i=1;i<=s.size()/2;i++){
            if(i==s.size()/2){
                string b="";
                for(int j=0;j<s.size()/2;j++){
                    b+=s.at(j);
                }
               count+=atoi(b.c_str());
               long long bbb=0;
                for(int j=0;j<i-1;j++){
                    bbb*=10;
                    bbb+=9;
                }
                count-=bbb;
                string ai;
                string ue;
                for(int t=0;t<s.size()/2;t++){
                    ai+=s.at(t);
                    ue+=s.at(t+s.size()/2);
                } 

                if(atoi(ai.c_str())>atoi(ue.c_str())){
                    count-=1;
                }
            }
            else{
                long long aaa=0;
                long long bbb=0;
                for(int j=0;j<i;j++){
                    aaa*=10;
                    aaa+=9;
                }
                for(int j=0;j<i-1;j++){
                    bbb*=10;
                    bbb+=9;
                }                
                count+=aaa;
                count-=bbb;
            }
        }
    }
    cout<<count<<endl;
}