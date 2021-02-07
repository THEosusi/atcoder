#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long x,y;
    cin>>x>>y;
    long long a,b;
    if((x>=0&&y>=0)||(x<0&&y<0)){
        if(x<=y){
            cout<<abs(abs(y)-abs(x))<<endl;
        }
        else{
            a=abs(abs(x)-abs(y))+2;
            b=y+x+1;
            if(x>=0&&y>=0){
                cout<<min(a,b)<<endl;
            }
            else{
                cout<<a<<endl;
            }
        }
        
    }
    else{
        if(x>y){
            cout<<abs(abs(y)-abs(x))+1<<endl;
        }
        else{
            a=y-x;
            b=abs(abs(x)-abs(y))+1;
            cout<<min(a,b)<<endl;
        }
    }

}