#include <bits/stdc++.h>
using namespace std;
#include <stdlib.h>
 
int main() {
    int X;
    cin >>X;
    int A=400,B=599;
    for(int i=8;0<i;i--){
    if(A+200*(8-i)<=X&&X<=B+200*(8-i)){
        cout << i <<endl;
    }
    }

}