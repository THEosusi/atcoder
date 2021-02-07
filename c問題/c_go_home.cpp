#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long X;
    cin>>X;
    long long sum=0;
    long long count;
    for(long long i=1;i<=100000000;i++){
        sum+=i;
        if(sum>=X){
            count=i;
            break;
        }
    }
    cout<<count<<endl;
}