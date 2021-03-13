#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int M;
    int Q;
    long long count=0;
    cin>>N>>M>>Q;
    vector<pair<int,int>>a;
    for(int i=0;i<N;i++){
        int s,t;
        cin>>s>>t;
        a.push_back(make_pair(t,s));
    }
    vector<int>vec(M);
    for(int i=0;i<M;i++){
        cin>>vec.at(i);
    }
   vector<pair<int,int>>b;
    for(int i=0;i<Q;i++){
        int s,t;
        cin>>s>>t;
        b.push_back(make_pair(s,t));
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<Q;i++){
        count=0;
     vector<int>c(M);
     copy(vec.begin(), vec.end(), c.begin());
     for(int j=b.at(i).first-1;j<b.at(i).second;j++){
         c.at(j)=0;
     }
     sort(c.begin(),c.end());
     for(int j=0;j<N;j++){
         for(int s=0;s<M;s++){
         if(a.at(j).second<=c.at(s)){
             count+=a.at(j).first;
             c.at(s)=0;
             break;
           }
         }
     }
     cout<<count<<endl;
    }
}