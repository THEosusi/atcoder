#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    int nino=0;
    int yono=0;
    int sonota=0;
    for(int i=0;i<N;i++){
        long long A;
        cin >>A;
        if(A%4==0){
            yono++;
        }
        else if(A%2==0){
            nino++;
        }
        else{
            sonota++;
        }
    }
    if(sonota<=yono){
        cout<<"Yes"<<endl;
    }
    else if(sonota-yono==1){
        if(nino%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }
}