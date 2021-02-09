#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>veca(N);
    vector<long long>vecb(N);
    vector<long long>vecc(N);
    for(long long i=0;i<N;i++){
        cin>>veca.at(i);
    }
    for(long long i=0;i<N;i++){
        cin>>vecb.at(i);
    }
    for(long long i=0;i<N;i++){
        cin>>vecc.at(i);
    }
    sort(veca.begin(),veca.end());
    sort(vecb.begin(),vecb.end());
    sort(vecc.begin(),vecc.end());
long long  count=0;
    for(long long i=0;i<N;i++){
        long long Intera =lower_bound(veca.begin(),veca.end(),vecb.at(i))- veca.begin();
        long long Interb =vecc.end()-upper_bound(vecc.begin(),vecc.end(),vecb.at(i));
    count+=Intera*Interb;
    }
    cout<<count<<endl;
}