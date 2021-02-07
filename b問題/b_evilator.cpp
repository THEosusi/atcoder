#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >>s;
    long long summ=0;
    long long sita=0;
    long long ue=s.size()-1;
    for(int i=0;i<s.size();i++){
        if(s.at(i)=='U'){
            summ+=ue;
            summ+=2*sita;
        }
        else{
            summ+=sita;
            summ+=2*ue;
        }
        sita++;
        ue--;
    }
    cout<<summ<<endl;
}