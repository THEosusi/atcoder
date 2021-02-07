#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,K;
    cin >>N>>K;
    int x;
    int sum=0;
    for(int i=0 ;i<N;i++){
    cin>>x;
    
    if(K-x<=x){
        sum+=2*(K-x);
    }
    else {
        sum+=2*x;
    }
    }
    cout << sum << endl;
}