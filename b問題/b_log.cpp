#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    long long sum=0;
    long long count;
    for(int i=1;i<2000000000;i++){
        if(sum+i<=n+1){
            sum+=i;
            count=i;
        }
        else{
            break;
        }
    }
    cout<<n-count+1<<endl;
}