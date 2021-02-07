#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >>N;
    set<long long> s;
    for(int i=0;i<N;i++){
        long long x;
        cin >>x;
        if(s.count(x)){
            s.erase(x);
        }
        else{
            s.insert(x);
        }
    }
    cout  <<s.size()<<endl;
}