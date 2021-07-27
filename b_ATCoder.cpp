#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin>>S;
    int aaa=0;
    for(int i=0;i<S.size();i++){
        int count=0;
            for(int k=0;k<S.size()-i;k++){
                
                if(S.at(i+k)=='A'||S.at(i+k)=='C'||S.at(i+k)=='G'||S.at(i+k)=='T'){
                    count++;
                }
                else{
                    break;
                }
            }
                    aaa=max(aaa,count);
                
        }
    cout<<aaa<<endl;
}