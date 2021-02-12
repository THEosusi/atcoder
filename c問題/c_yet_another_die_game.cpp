#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin>>x;
    long long AAA=0;
    AAA+=(x/11)*2;
    long long BBB=0;
    BBB= x%11;
    if(BBB<=6&&1<=BBB){
        cout<<AAA+1<<endl;
    }
    else if(7<=BBB){
        cout<<AAA+2<<endl;
    }
    else{
        cout<<AAA<<endl;
    }
}