#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<int>vec(N+1);
    for(int i=1;i<=N;i++){
        cin>>vec.at(i);
    }
    vector<int>x(N+1);
    for(int i=N;i>=1;--i){
        int sum=vec.at(i);
        for(int j=i*2;j<=N;j+=i){
            sum+=x.at(j);
        }
        x.at(i)=sum%2;
    }
    vector<int>res;
    for(int i=1;i<=N;i++){
        if(x.at(i)==1){
            res.push_back(i);
     }
    }
    if(res.size()==0){
        cout<<0<<endl;
        return 0;
    }
    cout<<res.size()<<endl;
    for(auto v:res){
        cout<<v<<" ";
    }
    cout<<endl;
}