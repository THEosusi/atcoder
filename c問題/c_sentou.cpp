#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,T;
    cin >>N>>T;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin >>vec.at(i);
    }
    long long sum=0;
    long long time=vec.at(0);
    for(long long i=0;i<N;i++){
        if(i==N-1){
            sum+=T;
            break;
        }
        if(T>vec.at(i+1)-time){
            sum+=vec.at(i+1)-time;
            time=vec.at(i+1);
        }
        else{
            sum+=T;
            time=vec.at(i+1);
        }
    }
    cout <<sum<<endl;
}