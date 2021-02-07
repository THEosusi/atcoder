#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char x,y;
    cin>>x>>y;
    if(x=='Y'){
        if(y=='a'){
            cout<<'A'<<endl;
            return 0;
        }
      else   if(y=='b'){
            cout<<'B'<<endl;
            return 0;
        }
        else{
             cout<<'C'<<endl;
            return 0;          
        }
    }
    else{
        cout<<y<<endl;
    }

}