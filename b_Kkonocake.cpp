#include <bits/stdc++.h>
using namespace std;
int main() {
    int K,T;
    cin>>K>>T;
    vector<long long>vec(T);
    for(int i=0;i<T;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    int bb=vec.at(0)*2-K-1;
    int aaa=max(bb,0);
    cout<<aaa<<endl;
}