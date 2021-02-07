#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin>>N;
    int count=0;
    for(int i=0;i<N.size();i++){
        int n=N.at(i)-'0'; 
        count += n;
    }
    if(count%9==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout <<"No"<<endl;
    }
}
