#include <bits/stdc++.h>
using namespace std;

int main() {
    long long L;
    cin>>L;
    long long A=1;
vector<long long>vec(13,0);
for(long long i=0;i<11;i++){
    vec.at(i+1)++;
}
    long long B=1;
    for(int i=11+L-12;L-12<i;i--){
        B*=i;
        for(long long  j=0;j<11;j++){
            if(vec.at(j+1)==1){
                if(B%(j+1)==0){
                    B/=(j+1);
                    vec.at(j+1)--;
                }
            }
        }
    }
    cout<<B<<endl;
}