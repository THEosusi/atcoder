#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,X;
    cin >> N;
    X=N%10;
    if(X==3){
        cout <<"bon"<<endl;
    }
    else if (X==0||X==1||X==6||X==8){
         cout <<"pon"<<endl;
    }
    else{
         cout <<"hon"<<endl;
    }
}