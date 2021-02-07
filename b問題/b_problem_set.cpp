#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >>N;
    map<long long ,long long>M;
    for(long long i=0;i<N;i++){
        long long s;
        cin>>s;
        M[s]++;
    }
    long long T;
    cin >>T;
    map<long long ,long long>M2;
    for(long long i=0;i<T;i++){
        long long s;
        cin>>s;
        M2[s]++;
    }
    for(auto p: M2){
        if(p.second<=M[p.first]){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
  cout<<"YES"<<endl;

}