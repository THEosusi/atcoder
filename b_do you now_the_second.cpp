#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin>>N;
    vector<pair<long long,string>>vec;
    for(long long i=0;i<N;i++){
        string a;
        long long b;
        cin >>a>>b;
        vec.push_back(make_pair(b,a));
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    cout<<vec.at(1).second<<endl;    
}