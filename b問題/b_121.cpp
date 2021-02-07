#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin>> a>>b;
    if(b==100){
    for(int i=1;i<1000;i*=10){
        int c=0;
        c=a/i%10*1000*i;
       b+=c;
      }
    }
    else if(9<b&&b<100){
        for(int i=1;i<1000;i*=10){
            int c=0;
            c=a/i%10*100*i;
            b+=c;
        }
    }
    else {
        for(int i=1;i<1000;i*=10){
            int c=0;
            c=a/i%10*10*i;
            b+=c;
        }
    }
    for(int i=1;i<350;i++){
        if(i*i==b){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No"  <<endl;

}