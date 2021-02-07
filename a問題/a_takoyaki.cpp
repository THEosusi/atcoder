#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int N;
 cin >>N;
 int X,T;
 cin >>X>>T;
 if(N%X==0){
     cout << N/X*T <<endl;
 }
 else{
     cout <<(N/X+1)*T<<endl;
 }


}