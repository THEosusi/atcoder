#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int X;
    cin >> X;
    int fX=0;
    for(int i=1; i<=X ; i*=10){
        fX += (X/i)%10 ;
    }

    if (X%fX == 0){
         cout << "yes"<< endl;

    }
    else { cout << "no"<<endl;}
    

    
}