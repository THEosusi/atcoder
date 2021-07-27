#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=d*c){
        cout<<-1<<endl;
    }
    else{
        if(a%(d*c-b)==0){
            cout<<a/(d*c-b)<<endl;
        }
        else{
            cout<<a/(d*c-b)+1<<endl;
        }
    }

}