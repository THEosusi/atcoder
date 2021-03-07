#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    long long count=0;
    set<long long>S;
    for(int i=2;i<=100000;i++){
        long long kei=0;
        long long aaa=i;
        for(;;){
            if(aaa*i>N){
                break;
            }
            aaa*=i;
            S.insert(aaa);

        }

    }
    cout<<N-S.size()<<endl;
}