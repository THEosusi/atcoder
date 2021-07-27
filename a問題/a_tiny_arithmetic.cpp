#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>vec(3);
    for(int i=0;i<3;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    if(vec.at(2)-vec.at(1)==vec.at(1)-vec.at(0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}