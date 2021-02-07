#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long L,R;
    cin>>L>>R;
    long long res;
    if(R-L>=2018){
        cout<<0<<endl;
        return 0;
    }
    long long ans=2019;
    for(long long i=L;i<R;i++){
        for(long long j=L+1;j<=R;j++){
             res=i*j%2019;
            ans=min(res,ans);
        }
    }
    cout<<ans<<endl;
}
