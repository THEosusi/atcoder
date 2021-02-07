#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B;
    cin>>A>>B;
    int C=2*A+100;
    if(C>=B){
        cout<<C-B<<endl;
    }
    else{
        cout<<0<<endl;
    }
}