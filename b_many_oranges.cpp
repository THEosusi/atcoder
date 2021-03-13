#include <bits/stdc++.h>
using namespace std;
int main() {
    long long A,B,W;
    cin>>A>>B>>W;
    W*=1000;
    long long maxx=-1,minn=-1;
    for(long long i=0;i<=2000000;i++){
        if(A*i<=W&&W<=B*i){
            if(maxx==-1){
                maxx=i;
            }
            if(minn==-1){
                minn=i;
            }
            maxx=max(i,maxx);
            minn=min(i,minn);
        }
    }
    if(maxx==-1){
        cout<<"UNSATISFIABLE"<<endl;
    }
    else{
        cout<<minn<<" "<<maxx<<endl;
    }

}