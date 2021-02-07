#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,M;
    cin>>N>>M;
    if(N>=M/2){
        cout<<M/2<<endl;
    }
    else{
        cout<<N+(M-(N*2))/4<<endl;
    }
}