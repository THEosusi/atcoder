#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int aiu=0;
    for(int i=5;i<=N;i+=2){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==8){
            aiu++;
        }
    }
    cout<<aiu<<endl;
}