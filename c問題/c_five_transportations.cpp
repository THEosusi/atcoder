#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,A,B,C,D,E;
    cin>>N>>A>>B>>C>>D>>E;
    long long J=min(min(min(A,B),min(C,D)),E);
   if(N<=J){
        cout<<5<<endl;
    }
     else if(N%J==0){
        cout<<N/J+4<<endl;
    }
    else{
     cout<<N/J+5<<endl;
    }
}