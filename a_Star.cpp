#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int X;
    cin>>X;
    int a;
    for(int i=0;i<1000000;i++){
        if(X<100*i){
            a=i;
            break;
        }
    }
    cout<<a*100-X<<endl;
}