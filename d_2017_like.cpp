#include <bits/stdc++.h>
using namespace std;
    int MAX = 101010;
    vector<int> IsPrime(MAX, 1);
void sieve(long long max){
    if(max+1 > IsPrime.size()){     // resizeで要素数が減らないように
        IsPrime.resize(max+1,true); // IsPrimeに必要な要素数を確保
    } 
    IsPrime[0] = false; // 0は素数ではない
    IsPrime[1] = false; // 1は素数ではない

    for(size_t i=2; i*i<=max; ++i) // 0からsqrt(max)まで調べる
        if(IsPrime[i]) // iが素数ならば
            for(size_t j=2; i*j<=max; ++j) // (max以下の)iの倍数は
                IsPrime[i*j] = false;      // 素数ではない
}

int main() {
    sieve(MAX);
    vector<int>a(MAX,0);
    for(int i=0;i<MAX;i++){
        if(i%2==0){
            continue;
        }
        if(IsPrime[i]&&IsPrime[(i+1)/2])a[i]=1;
    }

    int N;
    cin>>N;

    vector<int> s(MAX, 0);
    for (int i = 0; i < MAX-200; ++i) {
        s[i+1] = s[i] + a[i];
    }
    vector<pair<int,int>>vec(N);
    for (int q = 0; q < N; ++q) {
        int l, r;
        cin >> l >> r;
        ++r;
        vec.at(q).first=l;
        vec.at(q).second=r;
    }
    for(int i=0;i<N;i++){
        cout<<s.at(vec.at(i).second)-s.at(vec.at(i).first)<<endl;
    }
}