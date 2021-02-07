#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    vector<pair<int,int>>vec;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    int K;
    cin>>K;
     vector<pair<int,int>>vec2;
    for(int i=0;i<K;i++){
        int a,b;
        cin>>a>>b;
        vec2.push_back(make_pair(a,b));
    } 
      int keisoku=0;
    for(int bit=0;bit<(1<<K);++bit){
        vector<int>O;
        for(int i=0;i<K;i++){
            if(bit&(1<<i)){
                O.push_back(vec2.at(i).second);
            }
            else{
               O.push_back(vec2.at(i).first);
            }      
        }
    bool aaa=false,bbb=false;
           int maxx=0;
        for(int j=0;j<M;j++){
            for(int k=0;k<K;k++){
                if(O.at(k)==vec.at(j).first){
                 aaa=true;
                }
                if(O.at(k)==vec.at(j).second){
                 bbb=true;                    
                }
            }
            if(aaa&&bbb){
                maxx++;
            }
            aaa=false;
            bbb=false;
        }
           keisoku=max(maxx,keisoku);
            maxx=0;
    } 
    cout<<keisoku<<endl;
}