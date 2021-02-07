#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,K;
    cin >> N >>K;
    long long NNN;
    if(N==0||N%K==0){
        cout << 0 <<endl;
    }
    else  {
        NNN =N%K;
    cout <<min(NNN,abs(NNN-K))<<endl;
    }
}