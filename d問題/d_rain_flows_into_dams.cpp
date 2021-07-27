#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
        vec.at(i)*=2;
    }
    long long offset=0;
    for(int i=0;i<N;i++){
        offset=vec.at(i)-offset;
    }
    long long x=offset/2;

    long long cur=x;
    for(int i=0;i<N;i++){
        cout<<cur<<" ";
        cur=vec.at(i)-cur;
    }
    cout<<endl;
}