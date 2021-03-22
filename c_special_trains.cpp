#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<tuple<int ,int,int>>vec;
    for(int i=0;i<N-1;i++){
        int a,b,c;
        cin>>a>>b>>c;
        vec.push_back(make_tuple(a,b,c));
    }
    for(int i=0;i<N-1;i++){
        long long t=0;
        t+=get<1>(vec.at(i));
        t+=get<0>(vec.at(i));
        for(int j=i+1;j<N-1;j++){
            if(t<=get<1>(vec.at(j))){
                t=get<1>(vec.at(j));
            }
            else{
                int a=t;
                a-=get<1>(vec.at(j));
                a%=get<2>(vec.at(j));
                if(a!=0){
                 a=get<2>(vec.at(j))-a;
                }
                t+=a;
            }           
            t+=get<0>(vec.at(j));
        }
        cout<<t<<endl;
    }
    cout<<0<<endl;
}