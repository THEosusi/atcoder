#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >>N;
    int a=0,b=0,c=0;
    int count=0;
    for(int i=0;i<N;i++){
        int t,x,y;
        cin >>t>>x>>y;
        if((t-a)-abs(x-b)-abs(y-c)>=0&&((t-a)-abs(x-b)-abs(y-c))%2==0){
        a=t;
        b=x;
        c=y;
        }
        else{
           count=1;
           break;
        }
    }
    if(count){
    cout<<"No"<<endl;
    }
    else{
    cout<<"Yes"<<endl;
    }
}