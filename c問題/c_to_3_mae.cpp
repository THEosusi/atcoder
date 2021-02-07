#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string N;
    cin>>N;
    int sum=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<N.size();i++){
        int a=N.at(i)-'0'; 
    if(N.at(i)%3==1){
        count1++;
    }
    else if(N.at(i)%3==2){
        count2++;
    }
        sum+=a;
    }
    if(N.size()==1){
        if(N.at(0)%3==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        return 0;
    }
    if(N.size()==2){
    if(sum%3==1){
        if(count1>=1){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else if(sum%3==2){
        if(count2>=1){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
    return 0;      
    }
    if(sum%3==1){
        if(count1>=1){
            cout<<1<<endl;
        }
        else if(count2>=2){
            cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else if(sum%3==2){
        if(count2>=1){
            cout<<1<<endl;
        }
        else if(count1>=2){
            cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
}