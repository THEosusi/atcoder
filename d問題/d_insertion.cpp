#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin>>N>>S;
    int need_left=0;
    int pointer=0;
    for(int i=0;i<S.size();i++){
        if(S.at(i)=='('){
            ++pointer;
        }
        else{
            if(pointer ==0){
                ++need_left;
            }
            else{
                --pointer;
            }
        }
    }
    int need_right=pointer;
    string res="";
     for (int i = 0; i < need_left; ++i) res += '(';
    res += S;
    for (int i = 0; i < need_right; ++i) res += ')';
    cout << res << endl;   
}