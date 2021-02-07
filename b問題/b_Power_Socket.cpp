#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B;
    cin >> A >>B;
    if(B == 1){       
        cout << 0 << endl;
    }
    else if (A >= B){
        cout << 1 << endl;
    }
    else {
        if((B-A)%(A-1)==0){
         cout << (B-A)/(A-1)+1<< endl;
        }
        else if ((B-A)-(A-1)<0){
            cout << 2 <<endl;
        }
        else{
            cout << (B-A)/(A-1)+2 <<endl;
        }
      
     }

}