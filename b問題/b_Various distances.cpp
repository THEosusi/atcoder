#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long b=0;
    for(int i=0;i<N;i++){
        b+=abs(vec.at(i));
    }
    double c=0;
    for(int i=0;i<N;i++){
        c+=vec.at(i)*vec.at(i);
    }
    long long d=0;
    for(int i=0;i<N;i++){
        d=max(d,abs(vec.at(i)));
    }
    cout<<b<<endl;
    cout<<fixed<<setprecision(10)<<sqrt(c)<<endl;
    cout<<d<<endl;
}