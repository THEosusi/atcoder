#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
    int a;
    cin >> a;
    int b;
    int c=0;//カウンター
 for (int i=1;i<=a;i*=10){
     b = (a/i)%10;//きりすてて％１０であまりみてる
     if(b==1){
         ++c;}
           }  
           cout <<c << endl;
}
    
    
    