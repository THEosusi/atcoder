#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int X;
    cin >>X;
    for(;;){
        for(int i=X-1;1<=i;i--){
          if(X%i==0&&(!(i==1))){
              break;;
          }
          if(i==1){
              cout << X<<endl;
              return 0;;
          }
        }
        X++;
    }
}