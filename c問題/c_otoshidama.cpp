#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    long long Y;
    cin >>N>>Y;
    Y/=1000;
    if(N*10<Y||Y<N*1){
        cout<<-1<<" "<<-1<<" "<<-1<<endl;
        return 0;
    }
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            if(10*i+5*j+(N-i-j)==Y){
        cout<<i<<" "<<j<<" "<<N-i-j<<endl;
        return 0;                
            }
        }
    }
        cout<<-1<<" "<<-1<<" "<<-1<<endl;
        return 0;

}