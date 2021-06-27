#include <bits/stdc++.h>
using namespace std;
int main() {
    long long A,B,C;
    cin>>A>>B>>C;
    if(A>=0&&B>=0){
        if(A>B){
            cout<<">"<<endl;
        }
        else if(A<B){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    else if(A<0&&B<0){
        if(C%2==0){
        if(A>B){
            cout<<"<"<<endl;
        }
        else if(A<B){
            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }          
        }
        else{
        if(A>B){
            cout<<">"<<endl;
        }
        else if(A<B){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }            
        }
    }
    else if(A<0){
        if(C%2==0){
        if(abs(A)>B){
            cout<<">"<<endl;
        }
        else if(abs(A)<B){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }  
        }
        else{
            cout<<"<"<<endl;
        }
    }
    else{
        if(C%2==0){
        if(A>abs(B)){
            cout<<">"<<endl;
        }
        else if(A<abs(B)){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }  
        }
        else{
            cout<<">"<<endl;
        }        
    }
}