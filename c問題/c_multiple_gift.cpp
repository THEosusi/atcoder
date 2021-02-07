#include <bits/stdc++.h>
using namespace std;
 
int main() {
    unsigned long long X,Y;
    cin >>X>>Y;
    unsigned long long count =1;
    for(;;){
        X*=2;
        if(X>Y){
            break;
        }
        else{
            count++;
        }
    }
    cout <<count<<endl;
}