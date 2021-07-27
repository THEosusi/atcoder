#include <bits/stdc++.h>
using namespace std;

const long long p = 1000000000;
int main() {
    long long S;
    cin >> S;
    long long a = (S + p - 1) / p;
    long long d = p;
    long long b = a * p - S;
    long long c = 1;
    cout << "0 0 " << a << " " << b << " " << c << " " << d << endl;
}