#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S,T;
    cin>>S>>T;
    char alpha='a';
    char itizi;
    long long count=0;
    for(int i=0;i<26;i++){
        for(int j=0;j<T.size();j++){
            char bbb=alpha+i;
        if(T.at(j)==bbb){
            if(count==0){
                itizi=S.at(j);
                count++;
            }
            else{
                if(itizi!=S.at(j)){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
         }
        }
        count=0;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<T.size();j++){
            char bbb=alpha+i;
        if(S.at(j)==bbb){
            if(count==0){
                itizi=T.at(j);
                count++;
            }
            else{
                if(itizi!=T.at(j)){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
         }
        }
        count=0;
    }

    cout<<"Yes"<<endl;
}