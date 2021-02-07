#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,M;
    cin >>N>>M;
    vector<pair<int,int>>vec;
    for(int i=0;i<M;i++){
        int a,b;
        cin >>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
 
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(N!=1&&vec.at(j).first==1&&vec.at(j).second==0){
                cout<<-1<<endl;
                return 0;
            }
            if(vec.at(i).first==vec.at(j).first&&vec.at(i).second!=vec.at(j).second){
                cout<<-1<<endl;
                return 0;
            }
            if(N<vec.at(j).first){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    int b1=0;
    int b2=0;
    int b3=0;
    if(N==3){
        for(int i=0;i<M;i++){
            if(vec.at(i).first==1){
                b1=vec.at(i).second;
            }
            if(vec.at(i).first==2){
                b2=vec.at(i).second;
            }
            if(vec.at(i).first==3){
                b3=vec.at(i).second;
            }
        }
        if(b1==0){
            b1=1;
        }
        cout<<b1*100+b2*10+b3<<endl;
    }
    if(N==2){
        for(int i=0;i<M;i++){
            if(vec.at(i).first==1){
                b2=vec.at(i).second;
            }
            if(vec.at(i).first==2){
                b3=vec.at(i).second;
            }
        }
        if(b2==0){
            b2=1;
        }
        cout<<b2*10+b3<<endl;
    }
    if(N==1){
        for(int i=0;i<M;i++){
            if(vec.at(i).first==1){
                b3=vec.at(i).second;
            }
        }
        cout<<b3<<endl;       
    }
}