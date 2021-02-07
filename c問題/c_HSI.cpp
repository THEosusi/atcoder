#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    long long aaa=(1900*M+100*(N-M));
    for(int i=0;i<M;i++){
        aaa*=2;
    }
    cout<<aaa<<endl;
}