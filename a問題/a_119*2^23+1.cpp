#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin>>N;
    long long a=1;
    long long count=0;
    long long kotae=10000000000000000;
    while(1){
        if(a<=N){
        kotae=min(count+N/a+(N-a*(N/a)),kotae);
        a*=2;
        count++;
        }
        else{
            break;
        }
    }
    cout<<kotae<<endl;
}