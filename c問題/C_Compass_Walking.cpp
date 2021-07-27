#include <bits/stdc++.h>
using namespace std;
int main() {
    long long R,x,y;
    cin>>R>>x>>y;
    double aiai=sqrt(x*x+y*y);
    long long  aaa=sqrt(x*x+y*y);
    double ueue=(double)aaa;
    if(R>aiai){
        cout<<2<<endl;
        return 0;
    }
    if(aiai==ueue){
        if(aaa%R==0){
            cout<<aaa/R<<endl;
        }
        else{
            cout<<aaa/R+1<<endl;
        }
    }
    else{
        cout<<aaa/R+1<<endl;
    }

}