#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int S=0;
    for(int i=1;i<=N;i*=10){
      S +=   N/i%10;
    }
    if(N%S==0){
        cout <<"Yes"<<endl;
    }
      else {
          cout <<"No" << endl;
      }
    
}