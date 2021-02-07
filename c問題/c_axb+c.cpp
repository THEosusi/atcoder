#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >>N;
    int count=0;
    for(int i=1;i<=N-1;i++){
        count+=(N-1)/i;
    }
    cout <<count<<endl;
}