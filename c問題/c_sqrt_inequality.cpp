#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a,b,c;
    unsigned long long e,d,f;
    cin>>a>>b>>c;
    e=(unsigned long long)a;
    d=(unsigned long long)b;
    f=(unsigned long long)c;
    if((c-a-b)<=0){
        cout<<"No"<<endl;
        return 0;
    }
    if(4*e*d<(f-e-d)*(f-e-d)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}