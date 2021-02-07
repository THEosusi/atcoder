#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,A,B;
    cin >>N>>A>>B;
    long long b=(N-1)*B+A;
    long long a=(N-1)*A+B;
    if(N==1){
        if(A==B){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(A>B){
            cout<<0<<endl;
        }
        else{
        cout <<b-a+1<<endl;
        }
    }
}