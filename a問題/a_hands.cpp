#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a==b||a-b==1){
        cout<<x<<endl;
    }
    else if(a>b){
        if(2*x>=y){
            cout<<(a-1-b)*y+x<<endl;
        }
        else{
          cout<<(a-1-b)*2*x+x<<endl; 
        }
    }
    else{
        if(2*x>=y){
            cout<<x+(b-a)*y<<endl;
        }
        else{
            cout<<x+(b-a)*2*x<<endl;
        }
    }
}