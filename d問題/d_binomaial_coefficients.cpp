#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    long long aa=vec.at(0);
    long long answer=1000000000000000;
    long long kotae;
    for(int i=1;i<N;i++){
        if(abs(vec.at(i)-aa/2)<answer){
            answer=abs(vec.at(i)-aa/2);
            kotae=vec.at(i);
        }
    }
    cout<<aa<<" "<<kotae<<endl;

}