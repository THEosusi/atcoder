#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long> vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
       long long i;
    if(N%2==1){
     i=N-1;
    while(0<=i){
        cout<<vec.at(i)<<" ";
        i-=2;
    }
    i=1;
    while(i<=N-2){
        cout<<vec.at(i)<<" ";
        i+=2;
    }
 }
    else{
    i=N-1;
    while(1<=i){
        cout<<vec.at(i)<<" ";
        i-=2;
    }
    i=0;
    while(i<=N-2){
       cout<<vec.at(i)<<" ";
       i+=2;
    }
    }
    cout<<" "<<endl;
}