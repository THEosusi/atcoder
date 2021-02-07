#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    int heikin=0;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
        heikin+=vec.at(i);
    }
    int A=heikin/N;
    int B=heikin/N+1;
    int C=heikin/N-1;
    long long AAA=0;
    long long sum=1000000000000000;
    for(int i=0;i<N;i++){
        AAA+=(vec.at(i)-A)*(vec.at(i)-A);
    }
    sum=min(sum,AAA);
    AAA=0;
    for(int i=0;i<N;i++){
        AAA+=(vec.at(i)-B)*(vec.at(i)-B);
    }
     sum=min(sum,AAA);
    AAA=0;
    for(int i=0;i<N;i++){
        AAA+=(vec.at(i)-C)*(vec.at(i)-C);
    }
     sum=min(sum,AAA);      
    cout<<sum<<endl;
}