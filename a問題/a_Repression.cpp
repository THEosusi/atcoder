#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int d=a+b;
    int e=a+c;
    int t=b+c;
    cout<<max(max(d,e),t)<<endl;
}