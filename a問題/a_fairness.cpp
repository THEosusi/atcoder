#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B,C;
    cin >>A>>B>>C;
    long long K;
    cin>>K;

    if(K%2==0)
    { cout<<(A-B)<<endl;}
    else {
        cout <<(B-A)<<endl;
    }
    
}