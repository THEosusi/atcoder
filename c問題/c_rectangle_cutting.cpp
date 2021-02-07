#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double W,H,x,y;
    cin>>W>>H>>x>>y;
    int a=0;
    if(W/2==x&&H/2==y){
        a=1;
    }
    cout<<W*H/2<<" "<<a<<endl;

}