#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin >>S;
    int a;
    a = S.size();
    if(S.at(a-1)=='T'){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}