#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin >>n;
map<string,int> memo;
for(int i=0;i<n;i++){
    string s;
    cin >> s;
    memo.at(s)+=1;
}
}