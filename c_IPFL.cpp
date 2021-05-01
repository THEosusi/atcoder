#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    string S;
    long long Q;
    cin>>N>>S>>Q;
    string X="",Y="";
    char ww,oo;
    bool hantai=false;
    vector<int>vecT(Q);
    vector<int>vecA(Q);
    vector<int>vecB(Q);
    for(long long i=0;i<Q;i++){
        long long A,B,C;
        cin>>A>>B>>C;
        vecT.at(i)=A;
        vecA.at(i)=B;
        vecB.at(i)=C;
    }
    for(long long i=0;i<N;i++){
        X+=S.at(i);
    }
    for(long long i=N;i<2*N;i++){
        Y+=S.at(i);
    }    
    for(long long i=0;i<Q;i++){
        long long T=vecT.at(i);
        long long A=vecA.at(i);
        long long B=vecB.at(i);
        if(T==1){
            if(hantai==false){
                if(A<=N&&B<=N){
                    ww=X.at(A-1);
                    oo=X.at(B-1);
                    X.at(A-1)=oo;
                    X.at(B-1)=ww;
                }
                else if(A<=N&&N<B){
                    ww=X.at(A-1);
                    oo=Y.at(B-N-1);
                    X.at(A-1)=oo;
                    Y.at(B-N-1)=ww;                    
                }
                else{
                    ww=Y.at(A-N-1);
                    oo=Y.at(B-N-1);
                    Y.at(A-N-1)=oo;
                    Y.at(B-N-1)=ww;                      
                }
            }
            else{
                if(A<=N&&B<=N){
                    ww=Y.at(A-1);
                    oo=Y.at(B-1);
                    Y.at(A-1)=oo;
                    Y.at(B-1)=ww;
                }
                else if(A<=N&&N<B){
                    ww=Y.at(A-1);
                    oo=X.at(B-N-1);
                    Y.at(A-1)=oo;
                    X.at(B-N-1)=ww;                    
                }
                else{
                    ww=X.at(A-N-1);
                    oo=X.at(B-N-1);
                    X.at(A-N-1)=oo;
                    X.at(B-N-1)=ww;                      
                }
            }
        }
        else if(T==2){
            hantai=!(hantai);
        }
    }
    if(hantai==false){
    cout<<X+Y<<endl;
    }
    else{
    cout<<Y+X<<endl;       
    }
}