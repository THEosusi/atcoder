#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M;
    cin >>N>>M;
    if(N==1&&M==1){
        cout<<1<<endl;
        return 0;
    }
    else if((N==1&&M>=3)||(M==1&&N>=3)){
        cout<<N*M-2<<endl;
        return 0;
    }
    else if(N==2||M==2){
        cout<<0<<endl;
        return 0;
    }
    else{
        cout<<(N-2)*(M-2)<<endl;
        return 0;
    }
}