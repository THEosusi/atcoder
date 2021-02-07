#include <bits/stdc++.h>
using namespace std;

long long choose2(long long n){
    long long ans;
    ans =n*(n-1)/2;
    return ans;
}
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    vector<long long>vec2(N,0);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
        vec.at(i)--;//0にして調節してる
    }
    for(int i=0;i<N;i++){
        vec2.at(vec.at(i))++;
    }
    long long suM=0;
    for(int i=0;i<N;i++){
        suM += choose2(vec2.at(i));
    }
    long long ans;
    for(int k=0;k<N;k++){
        ans = suM;
        ans -= choose2(vec2.at(vec.at(k)));
        ans += choose2(vec2.at(vec.at(k))-1);
            cout <<ans<<endl;
    }
    return 0;
}