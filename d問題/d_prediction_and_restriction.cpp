#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,K;
    int R,S,P;
    string T;
    cin>>N>>K>>R>>S>>P>>T;
    long long sum=0;
    for(int i=0;i<K;i++){
        if(T.at(i)=='r'){
            sum+=P;
        }
        else if(T.at(i)=='s'){
            sum+=R;
        }
        else if(T.at(i)=='p'){
            sum+=S;
        }       
    }
    int r,s,p;
    for(int i=K;i<N;i++){
        if(T.at(i)=='r'){
            if(T.at(i-K)=='r'){
                T.at(i)='a';
            }
            else{
            sum+=P;
            }
        }
        else if(T.at(i)=='s'){
            if(T.at(i-K)=='s'){
                T.at(i)='a';
            }
            else{
            sum+=R;
            }          
        }
       else if(T.at(i)=='p'){
            if(T.at(i-K)=='p'){
                T.at(i)='a';
            }
            else{
            sum+=S;
            }             
        }
    }
    cout<<sum<<endl;

}