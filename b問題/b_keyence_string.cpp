#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string KEY ="keyence";
    string A;
    cin >>A;
    bool con=false;
    for(int i=0;i<=A.size();i++){
        for(int j=i;j<=A.size();j++){
            string AAA=A.substr(0,i)+A.substr(j);
            if(AAA==KEY){
                con=true;
            }
        }
    }
    if(con){
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}