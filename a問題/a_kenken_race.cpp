#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,A,B,C,D;
    cin>>N>>A>>B>>C>>D;
    string s;
    cin>>s;
    int iwa=0;
    if(C<D){
        for(long long j=A-1;j<C;j++){
            if(s.at(j)=='#'){
                iwa++;
            }
            else{
                iwa=0;
            }
            if(iwa==2){
                cout<<"No"<<endl;
                return 0;
            }
        }
        for(long long j=B-1;j<D;j++){
            if(s.at(j)=='#'){
                iwa++;
            }
            else{
                iwa=0;
            }
            if(iwa==2){
                cout<<"No"<<endl;
                return 0;
            }
        }
    cout<<"Yes"<<endl;
    }
    else{
        for(long long j=A-1;j<D;j++){
            if(s.at(j)=='#'){
                iwa++;
            }
            else{
                iwa=0;
            }
            if(iwa==2){
                cout<<"No"<<endl;
                return 0;
            }
        }
        for(long long j=B-1;j<D;j++){
            if(j==B){
                if(s.at(j-1)=='#'||s.at(j+1)=='#'){
                    continue;
                }
            }
            if(s.at(j)=='.'){
               if(s.at(j-1)=='#'||s.at(j+1)=='#'){
                    continue;
                }
                else{
                    cout<<"Yes"<<endl;
                    return 0;
                }    
            }
        }
      cout<<"No"<<endl;

    }
}