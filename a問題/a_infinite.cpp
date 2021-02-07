#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,A;
    cin >> N >> A;
    int B = N % 500;
    if(B<=A){
        cout <<"Yes"<<endl;
    }
    else {cout <<"No" << endl;}
}