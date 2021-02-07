#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,X;
    string s;
    cin>>N>>X>>s;
    for(long long i=0;i<N;i++){
        if(s.at(i)=='o'){
            X+=1;
        }
        else{
            if(X==0){

            }
            else{
                X-=1;
            }
        }
    }
    cout<<X<<endl;


}