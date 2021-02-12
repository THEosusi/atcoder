#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>uiui;
    map<long long,long long>aaa;
    for(long long i=0;i<N;i++){
        long long A;
        cin>>A;
        aaa[A]++;
        if(aaa.size()>=4){
            cout<<"No"<<endl;
            return 0;
         }
        }
    for (auto it : aaa) uiui.push_back(it.first);
    if(aaa.size()==1){
        if(aaa[0]==N){
                cout<<"Yes"<<endl;
                return 0;
        }    
    }
    else if(aaa.size()==2){
        if(aaa[0]==N/3){
                cout<<"Yes"<<endl;
                return 0;
       }
    }
    else{

         for(auto p:aaa){
            if(p.second!=N/3){
         cout<<"No"<<endl;
         return 0;           
            }
         } 
        long long ooo= uiui.at(0)^uiui.at(1)^uiui.at(2);
         if(ooo==0){
             cout<<"Yes"<<endl;
             return 0;
          }     
         }
    cout<<"No"<<endl;
}