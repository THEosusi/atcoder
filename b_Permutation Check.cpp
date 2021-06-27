#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        int ore;
        cin>>ore;
        vec.at(ore-1)++;
    }
    for(int i=0;i<N;i++){
        if(vec.at(i)!=1){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}