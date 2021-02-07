#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    for (int i=1 ;i<=N;i++ ){
    
      if (i%3==0&&i%5==0){
         cout<<" Fizz Buzz ";
         }
     else if (i%3==0){
         cout<<" Fizz ";
    }
     else if (i%5==0)
       cout << " Buzz ";
      else  if (i%3==1||i%3==2){
         cout<<i ;
     }
}
cout<< endl ;
}