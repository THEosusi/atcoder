#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r,g,b,n;
    cin >>r>>g>>b>>n;
    long long ans=0;
    for(int i=0;i*r<=n;i++){
        for(int j=0;i*r+j*g <= n;j++){
            int lastB =n -(i*r)-(j*g);
            if(lastB %b ==0 || lastB%b ==0){
                ans++;
            }

        }
    }
    cout <<ans<<endl;
}