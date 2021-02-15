#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    int count=1;
    for(long long i=1;i*i<=N;i++){
        if(N%i==0){
            count=i;
        }
    }
    long long a=N/count;
    long long aaa=0;
string S=to_string(a);
    cout<<S.size()<<endl;
}