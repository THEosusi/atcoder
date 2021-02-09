#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin>>S;
    int Rnokazu=0;
    vector<int>vec(S.size());
   for(int i=0;i<S.size();i++){
        if(S.at(i)=='R'){
            Rnokazu++;
        }
        else if(S.at(i)=='L'&&Rnokazu>=1){
            if(Rnokazu%2==0){
                vec.at(i-1)+=Rnokazu/2;
                vec.at(i)+=Rnokazu/2;
            }
            else{
                vec.at(i-1)+=Rnokazu/2+1;
                 vec.at(i)+=Rnokazu/2;
            }
            Rnokazu=0;
        }
    }
    Rnokazu=0;
    for(int i=S.size()-1;0<=i;i--){
        if(S.at(i)=='L'){
            Rnokazu++;
        }
        else if(S.at(i)=='R'&&Rnokazu>=1){
            if(Rnokazu%2==0){
                vec.at(i+1)+=Rnokazu/2;
                vec.at(i)+=Rnokazu/2;
            }
            else{
                vec.at(i+1)+=Rnokazu/2+1;
                 vec.at(i)+=Rnokazu/2;
            }
            Rnokazu=0;
        }
    }
    for(int i=0;i<S.size();i++){
        cout<<vec.at(i)<<endl;
    }
}