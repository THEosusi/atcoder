#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    long long sum=0;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        if(a>10){
            sum+=a-10;
        }
    }
    cout<<sum<<endl;
}