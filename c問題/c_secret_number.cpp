#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin>>S;
    vector<int>vec(10);
    for(int i=0;i<10;i++){
        if(S.at(i)=='o'){
            vec.at(i)+=2;
        }
        else if(S.at(i)=='?'){
            vec.at(i)++;
        }
    }
    int count=0;
    for(int i=0;i<10000;i++){
        string oioi=to_string(i);
        bool ore=false;
        vector<int>aaa(10);
        if(i<10){
            aaa.at(0)+=3;
        }
        else if(10<=i&&i<100){
            aaa.at(0)+=2;
        }
        else if(i<1000){
            aaa.at(0)++;
        }
        for(int j=0;j<oioi.size();j++){
            int u=oioi.at(j)-'0';
            aaa.at(u)++;
        }
        for(int j=0;j<10;j++){
            if(vec.at(j)==2){
                if(aaa.at(j)==0){
                    ore=true;
                    break;
                }
            }
            else if(vec.at(j)==0){
                if(aaa.at(j)>=1){
                    ore=true;
                    break;
                }
            }
        }
        if(ore){
            continue;
        }
        count++;
    }
    cout<<count<<endl;
}