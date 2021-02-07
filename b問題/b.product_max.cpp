#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long A=a*c,B=a*d,C=b*c,D=b*d;
    long long E=max(A,B);
    long long F=max(C,D);
    cout <<max(E,F)<<endl;
}