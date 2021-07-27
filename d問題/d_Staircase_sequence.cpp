#include <bits/stdc++.h>
using namespace std;
 vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
int main() {
    long long N;
    cin>>N;
    long long ans=0;
    vector<long long>vec =divisor(2*N);
    for(long long i=0;i<vec.size();i++){
        if((2*N/vec.at(i)-vec.at(i)+1)%2==0){
            ans++;
        }
    }
    cout<<ans<<endl;
}