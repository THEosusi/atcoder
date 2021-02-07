#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    vector<long long>veca(N);
    vector<long long>vecb(N);
    for(long long i=0;i<N;i++){
        cin>>veca.at(i)>>vecb.at(i);
    }
    reverse(veca.begin(),veca.end());
    reverse(vecb.begin(),vecb.end());
    long long keisoku=0;
    for(long long i=0;i<N;i++){
        veca.at(i)+=keisoku;
        if(veca.at(i)%vecb.at(i)==0){
            continue;
        }
         keisoku+=(veca.at(i)/vecb.at(i)+1)*vecb.at(i)-veca.at(i);
    }
    cout<<keisoku<<endl;
}