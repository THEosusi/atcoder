#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin >> a >>b;
    int x,y;
    
    x=(a+b)%2;
    y=(a+b)/2;
    if(x==0){
        cout << y << endl;
    }
    else{
        cout << 1+y << endl;
    }
}